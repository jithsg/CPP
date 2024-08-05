#include "Circle.h"


namespace Geometry{
    Circle :: Circle(float r): radius(r) {}

    float Circle :: Circumference() const{
        return 2 * 3.14159 * radius;
    }
    float Circle :: Area() const{
        return 3.14159 * radius * radius;
    }


}
