// Sportscar.h
#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include <iostream>
#include <string>
#include "Car.h"

class Sportscar : public Car {
private:
    bool sunroof;
    bool transmission;

public:
    Sportscar();
    Sportscar(std::string color, std::string brand, const Engine& engine, bool sunroof, bool transmission);

    std::string getType() const override;

    void saveCar(std::ostream& output) const override;
};

#endif
