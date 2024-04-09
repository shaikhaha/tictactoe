// Sportscar.cpp
#include <iostream>
#include "Sportscar.h"

Sportscar::Sportscar() : Sportscar("Black", "Unknown", Engine("Unknown"), false, false) {}

Sportscar::Sportscar(std::string color, std::string brand, const Engine& engine, bool sunroof, bool transmission)
    : Car(color, brand, engine), sunroof(sunroof), transmission(transmission) {}

std::string Sportscar::getType() const {
    return "Sportscar";
}

void Sportscar::saveCar(std::ostream& output) const {
    Car::saveCar(output);
    output << sunroof << " ";
    output << transmission << " ";
}
