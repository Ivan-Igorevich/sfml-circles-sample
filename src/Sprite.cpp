#include "../include/Sprite.hpp"

float scs::Sprite::getLeft() const { return x - halfWidth; }
auto scs::Sprite::setLeft(const float left) -> void { x = left + halfWidth; }
float scs::Sprite::getRight() const { return x + halfWidth; }
void scs::Sprite::setRight(const float right) { x = right - halfWidth; }
float scs::Sprite::getTop() const { return y - halfHeight; }
void scs::Sprite::setTop(const float top) { y = top + halfHeight; }
float scs::Sprite::getBottom() const { return y + halfHeight; }
void scs::Sprite::setBottom(const float bottom) { y = bottom - halfHeight; }

float scs::Sprite::getWidth() const { return 2 * halfWidth; }
float scs::Sprite::getHeight() const { return 2 * halfHeight; }
