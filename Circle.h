#include "Geometry.h"


namespace Geometry {
    class Circle{
    private:
        float radius;
    public:
        float Circumference() const;
        float Area() const;
        Circle(float r);
};
}