#pragma once
#include "defines.hpp"
#include <random>

class ShapeGenerator {
public:
    ShapeGenerator();
    ~ShapeGenerator();
    Shape generateNext(); // = generateNextPiece()

private:
    std::random_device rd; // = random
    std::mt19937 gen;
    std::uniform_int_distribution<> dis;
};