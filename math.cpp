#pragma once
#include "geometry.cpp"

namespace math{
int Add(int x, int y) {
  return x + y+ static_cast<int>(geometry::Pi);
}
}