#ifndef SPRITE_HPP_
#define SPRITE_HPP_
#include "GameObject.hpp"

namespace scs
{
    class Sprite : public scs::GameObject
    {
    protected:
        float x{};
        float y{};
        float halfWidth{};
        float halfHeight{};
        Sprite() = default;

    public:
        virtual ~Sprite() = 0;
        float getLeft() const;
        void setLeft(float left);
        float getRight() const;
        void setRight(float right);
        float getTop() const;
        void setTop(float top);
        float getBottom() const;
        void setBottom(float bottom);

        float getWidth() const;
        float getHeight() const;
    };

}
#endif
