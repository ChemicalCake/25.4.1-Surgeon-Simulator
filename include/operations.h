#pragma once
#include <iostream>
#include <vector>
#include "points.h"

Point readPointFromConsole() {
    double x, y;
    std::cout << "Enter the coordinates (x y): \n";
    std::cin >> x >> y;
    return Point(x, y);
}

void printPointToConsole(const Point& point) {
    std::cout << "Point: (" << point.x << ", " << point.y << ")\n";
}

bool comparePoints(const Point& point1, const Point& point2, const Point& point3, const Point& point4) {
    return point1.x == point3.x && point1.y == point3.y && point2.x == point4.x && point2.y == point4.y
    || point1.x == point4.x && point1.y == point4.y && point2.x == point3.x && point2.y == point3.y;
}