#include "Client.hpp"

Client::Client() { 

}

Client::~Client() { }

int 		Client::run() {

	sf::RenderWindow window(sf::VideoMode(1080, 720), "R-Type Client");

    window.setFramerateLimit(60);

    this->connectionToServer(&window);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return (0);
}

int         Client::connectionToServer(sf::RenderWindow *window) {

    string          text_address = "";

    sf::Text    text;
    sf::Font    font;

    if (!font.loadFromFile("../../ressources/fonts/arial.ttf"))
        cout << "Failed to load font" << endl;

    text.setFont(font);
    text.setCharacterSize(20);

    while (window->isOpen())
    {
        sf::Event   event;

        while (window->pollEvent(event)) {
            window->clear(sf::Color::Black);
            if (event.type == sf::Event::Closed)
                window->close();

            if (event.type == sf::Event::TextEntered) {
                if ((event.text.unicode > 30 &&
                    (event.text.unicode < 127
                        || event.text.unicode > 159))) {
                    text_address += static_cast<char>(event.text.unicode);
                }
                
                text.setString("IP: " + text_address);
                window->draw(text);
                window->display();
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return) &&
                !text_address.empty()) {
                if (network.createSocket(text_address.c_str()) != -1) {
                    cout << "Connected" << endl;
                    text.setString("Connected");
                    window->clear(sf::Color::Black);
                    window->draw(text);                    
                    window->display();
                    return (0);
                }
                text_address = "";
            }
        }
    }
    return (0);
}

