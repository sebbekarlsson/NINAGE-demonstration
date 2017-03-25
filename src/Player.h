#ifndef PLAYER_H
#define PLAYER_H


#include <ninage/engine/Ninage.h>
#include <ninage/engine/Entity.h>


class Player: public Entity {
    public:
        Player(float x, float y);

        void tick(float delta);
        void draw(float delta);
        void scene(float delta, Instance *instance);
};

#endif
