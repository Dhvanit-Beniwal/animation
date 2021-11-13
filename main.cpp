#include <SFML/Graphics.hpp>

int main()
{
    int window_x = 1920/1.5;
    int window_y = 1080/1.5;
    sf::RenderWindow window(sf::VideoMode(window_x, window_y), "SFML ftw!");

    sf::VertexArray points(sf::Points, window_x*window_y);
    for(int i = 0 ; i < window_x*window_y ; i++){
        int x = i%window_x;
        int y = i/window_x;
        points[i].position = sf::Vector2f(x, y);
        points[i].color = sf::Color(x/9,y/16,x^y);
    }

    float count = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        for(int y = 0 ; y < window_y ; y++){
            for(int x = 0 ; x < window_x ; x++){
                points[y*window_x + x].color = sf::Color(x/9,y/16,(x^y)+count);
            }
        }
        
        count += 0.1;

        window.clear();
        window.draw(points);
        window.display();
    }

    return 0;
}
