#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <ninage/engine/Scene.h>


class Ninage;
extern Ninage *game;


class MainScene: public Scene {
    public:
        MainScene();

        void tick(float delta);
        void draw(float delta);
        void init(float delta);
};

#endif
