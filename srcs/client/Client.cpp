#include "Client.hpp"

Client::Client() { 

}

Client::~Client() { }

int 		Client::run() {

	sf::RenderWindow window(sf::VideoMode(1080, 720), "R-Type Client");

    window.setFramerateLimit(60);

    if (!font.loadFromFile("../../ressources/fonts/arial.ttf"))
        cout << "Failed to load font" << endl;

    this->connectionToServer(&window);
    this->connectgame(&window);
    window.clear();
    this->play(&window);

    return (0);
}

void        Client::catchKeyboardInputs() {

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) // Top
        network.send("z");

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) // Left
        network.send("q");

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) // Down
        network.send("s");
                
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))  // Right
        network.send("d");
                
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)     // Top left
        && sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
         network.send("zq");

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)     // Top right
        && sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        network.send("zd");

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)     // Bot left
        && sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        network.send("sq");

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)     // Bot right
        && sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        network.send("sd");

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) // Shoot
        network.send("shoot");
}

int 		Client::play(sf::RenderWindow *window) {

	sf::Text    text;
    sf::Sprite sprite;
    sf::Texture background;

    if (!background.loadFromFile("../../ressources/sprites/mapground.png"))
        cout << "Failed to load Background map " << endl;

    cout << "PLAY!" << endl;
    sprite.setTexture(background);
	while (window->isOpen()) {
        
        sf::Event   event;

        while (window->pollEvent(event)) {
            window->clear(sf::Color::Black);

            if (event.type == sf::Event::Closed)
                window->close();

            catchKeyboardInputs();

            // Load things to draw
            window->draw(sprite);
            window->display();
            
            window->clear();
        }
    }

	return (0);
}

int         Client::connectionToServer(sf::RenderWindow *window) {

    string 		text_address = "";
    sf::Text    text;

    text.setFont(font);
    text.setCharacterSize(20);

    while (window->isOpen()) {

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
                    text.setString("Connected.");
                    window->clear();
                    window->draw(text);                    
                    window->display();
                    return (0);
                }
                text_address = "";
                return (0);
            }
        }
    }
    return (0);
}

int         Client::connectgame(sf::RenderWindow *window)
{
        string      text_address = "";
    sf::Text    text;

    text.setFont(font);
    text.setCharacterSize(20);

    while (window->isOpen()) {

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
                
                text.setString("Do you want to join a game ? " + text_address);
                window->draw(text);
                window->display();
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return) &&
                !text_address.empty()) {
                if (network.send(text_address.c_str()) != -1) {
                    cout << "Success ! You join a R-Type game !" << endl;
                    text.setString("Connected to the game");
                    window->clear();
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