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
        [[nodiscard]] float getLeft() const;
        void setLeft(float left);
        [[nodiscard]] float getRight() const;
        void setRight(float right);
        [[nodiscard]] float getTop() const;
        void setTop(float top);
        [[nodiscard]] float getBottom() const;
        void setBottom(float bottom);

        [[nodiscard]] float getWidth() const;
        [[nodiscard]] float getHeight() const;
    };

}
#endif
