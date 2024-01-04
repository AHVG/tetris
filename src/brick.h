/*

0000
####
0000
0000

0000
000#
####
0000

0000
#000
####
0000

##
##

0000
0##0
##00

0000
##00
0##0

000
###
0#0

*/

#ifndef _H_BRICK
#define _H_BRICK

#include <SFML/Graphics.hpp>

#include <vector>


class Brick {

private:

    sf::RectangleShape shape;
    sf::Vector2f position;
    std::vector<int> matrix;

    int size;
    float elapsed_time;
    float time_when_accelerate;
    float time_when_decelerate;
    float current_time;

public:

    Brick();
    ~Brick();

    void go_right();
    void go_left();

    void rotate_clockwise();

    void accelerate();
    void decelerate();

    void handle_key_pressed(sf::Keyboard::Key key_pressed);
    void handle_key_released(sf::Keyboard::Key key_released);

    void update(float delta);
    void draw_at(sf::RenderWindow *window);

};

#endif