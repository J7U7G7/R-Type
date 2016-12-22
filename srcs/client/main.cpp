#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>

void	window()
{
  sf::RenderWindow window(sf::VideoMode(800, 600), "R-Type");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.display();
    }

}

int main()
{
  sf::Thread threadWindow(&window);
  threadWindow.launch();

  return (0);
}


