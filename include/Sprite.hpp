#ifndef SPRITE_HPP_
#define SPRITE_HPP_
#include "GameObject.hpp"

namespace scs
{
    class Sprite : public scs::GameObject
    {
    protected:
        float x;
        float y;
        float halfWidth;
        float halfHeight;

    public:
        virtual ~Sprite() = 0;
        Sprite() {}
        float getLeft();
        void setLeft(float left);
        float getRight();
        void setRight(float right);
        float getTop();
        void setTop(float top);
        float getBottom();
        void setBottom(float bottom);

        float getWidth();
        float getHeight();
    };

}
#endif
