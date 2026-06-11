#ifndef COLLISION_H
#define COLLISION_H

#include <SDL2/SDL.h>

class Collision {
public:
    static bool checkCollision(const SDL_Rect& rect1, const SDL_Rect& rect2);
    static bool pointInRect(int x, int y, const SDL_Rect& rect);
    static bool circleCollision(int x1, int y1, int r1, int x2, int y2, int r2);
};

#endif // COLLISION_H
