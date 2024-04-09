// SUV.cpp
#include <iostream>
#include "SUV.h"

SUV::SUV() : SUV("Black", "Unknown", Engine("Unknown"), 0) {}

SUV::SUV(std::string color, std::string brand, const Engine& engine, int cargoSpace)
    : Car(color, brand, engine), cargoSpace(cargoSpace) {}

int SUV::getCargoSpace() const {
    return cargoSpace;
}

std::string SUV::getType() const {
    return "SUV";
}

void SUV::saveCar(std::ostream& output) const {
    Car::saveCar(output);
    output << cargoSpace << " ";
}