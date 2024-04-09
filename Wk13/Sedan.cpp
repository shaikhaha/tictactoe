// Sedan.cpp
#include <iostream>
#include "Sedan.h"

Sedan::Sedan() : Sedan("Black", "Unknown", Engine("Unknown"), false) {}

Sedan::Sedan(std::string color, std::string brand, const Engine& engine, bool sunroof)
    : Car(color, brand, engine), sunroof(sunroof) {}

bool Sedan::getSunroof() const {
    return sunroof;
}

std::string Sedan::getType() const {
    return "Sedan";
}

void Sedan::saveCar(std::ostream& output) const {
    Car::saveCar(output);
    output << sunroof << " ";
}