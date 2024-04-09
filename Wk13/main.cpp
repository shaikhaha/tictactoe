// main.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include "Car.h"
#include "Sedan.h"
#include "SUV.h"
#include "Sportscar.h"

Car* getCar(std::string aCar);

int main() {
    srand(time(0));

    int numCars;
    std::cout << "Enter the number of cars to build: ";
    std::cin >> numCars;

    std::vector<Car*> cars;
    for (int i = 0; i < numCars; ++i) {
        int carType = rand() % 3;
        switch (carType) {
            case 0:
                cars.push_back(new Sportscar());
                break;
            case 1:
                cars.push_back(new SUV());
                break;
            case 2:
                cars.push_back(new Sedan());
                break;
        }
    }

    return 0;
}
