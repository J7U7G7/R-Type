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

    if (this->fillCatalog() == -1) {
        cout << "Critical error happened while filling catalog" << endl;
        return (-1);
    }
    this->connectGame(&window);
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

    sf::Sprite  bg;
    sf::Texture background;

    if (!background.loadFromFile("../../ressources/sprites/mapground.png"))
        cout << "Failed to load Background map " << endl;

    // Données brutes pour test
    PlayerShip player(500, 500);
    player_list.push_back(player);

    Bullet bullet(650, 500);
    bullet_list.push_back(bullet);    

    EnnemyShip ennemy(1000, 500);
    ennemy_list.push_back(ennemy);

    bg.setTexture(background);
	while (window->isOpen()) {
        
        sf::Event   event;

        while (window->pollEvent(event)) {
            window->clear(sf::Color::Black);

            if (event.type == sf::Event::Closed)
                window->close();

            // receiveServerUpdates();

            catchKeyboardInputs();

            // Load things to draw
            window->draw(bg);
            renderPlayers(window);
            renderBullets(window);
            renderEnnemyShips(window);

            window->display();            
            window->clear();
        }
    }

	return (0);
}

void    Client::renderPlayers(sf::RenderWindow *window) {

    for (int i = 0; i < player_list.size(); i++) {
        // cout << i << ") Draw player [" << player_list[i].getX() << "][" << player_list[i].getY() << "]" << endl;
        drawObject(window, player_list[i].getX(), player_list[i].getY(), 0, 0.5f, 0.5f, 90, 0, 0);
    }
}

void    Client::renderBullets(sf::RenderWindow *window) {

    for (int i = 0; i < bullet_list.size(); i++) {
        // cout << i << ") Draw bullet [" << bullet_list[i].getX() << "][" << bullet_list[i].getY() << "]" << endl;
        drawObject(window, bullet_list[i].getX(), bullet_list[i].getY(), 1, 1.0f, 1.0f, 0, 0, 45);
    }
}

void    Client::renderEnnemyShips(sf::RenderWindow *window) {

    for (int i = 0; i < ennemy_list.size(); i++) {
        // cout << i << ") Draw bullet [" << ennemy_list[i].getX() << "][" << ennemy_list[i].getY() << "]" << endl;
        drawObject(window, ennemy_list[i].getX(), ennemy_list[i].getY(), 2, 0.5f, 0.5f, 180, 0, 125);
    }
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
                    window->clear(sf::Color::Black);
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

int            Client::fillCatalog() {

    sf::Texture tmp;

    if (!tmp.loadFromFile("../../ressources/models/player01.png"))
        return (-1);
    catalog.push_back(tmp);

    if (!tmp.loadFromFile("../../ressources/models/bullet.png"))
        return (-1);
    catalog.push_back(tmp);
    
    if (!tmp.loadFromFile("../../ressources/models/ennemy01.png"))
        return (-1);
    catalog.push_back(tmp);

    return (0);
}

int         Client::drawObject(sf::RenderWindow *window, int pos_x, int pos_y, int id,
                                float scale_x, float scale_y, int rotate,
                                int offset_x, int offset_y) {

    sf::Sprite sprite;

    sprite.setTexture(catalog[id]);
    sprite.setPosition(sf::Vector2f(pos_x, pos_y));
    sprite.setScale(scale_x, scale_y);
    sprite.setRotation(rotate);
    sprite.move(offset_x, offset_y);
    window->draw(sprite);
}

int         Client::connectGame(sf::RenderWindow *window)
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