#include <iostream>
#include "operations.h"
#include "points.h"

int main() {
    std::cout << "Surgeon Simulator\n";
    std::string input;
    while (input != "scalpel")
    {
        std::cout << "Enter scalpel to start surgery\n";
        std::cin >> input;
    }
    Point startPoint = readPointFromConsole();
    Point endPoint = readPointFromConsole();

    std::cout << "Scalpel: Made a cut between ";
    printPointToConsole(startPoint);
    std::cout << " and ";
    printPointToConsole(endPoint);

    bool operationComplete = false;
    while (!operationComplete)
    {
        std::cout << "Enter hemostat or tweezers or suture to continue operation: \n";
        std::cin >> input;
        if (input == "hemostat")
        {
            Point clampPoint = readPointFromConsole();
            std::cout << "Hemostat: Clamped at ";
            printPointToConsole(clampPoint);
        }
        else if (input == "tweezers")
        {
            Point tweezersPoint = readPointFromConsole();
            std::cout << "Tweezers: Picked up at ";
            printPointToConsole(tweezersPoint);
        }
        else if (input == "suture")
        {
            Point sutureStartPoint = readPointFromConsole();
            Point sutureEndPoint = readPointFromConsole();
            std::cout << "Suture: Stitched between ";
            printPointToConsole(startPoint);
            std::cout << " and ";
            printPointToConsole(endPoint);
            printPointToConsole(sutureStartPoint);
            printPointToConsole(sutureEndPoint);

            if (comparePoints(startPoint, endPoint, sutureStartPoint, sutureEndPoint)) {
                operationComplete = true;
                std::cout << "Operation completed successfully.\n";
            } else {
                std::cout << "Error: The suture points do not match.\n";
            }
        }
        else
        {
            std::cout << "Error: Invalid input.\n";
        }
    }
    system("pause");
    return 0;
}
