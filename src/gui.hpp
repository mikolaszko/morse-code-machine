#include <raylib-cpp.hpp>

class PlayButton
{
public:
    void create(Vector2 a, Vector2 b, Vector2 c, Color color)
    {
        DrawTriangle(a, b, c, color);
    };
};