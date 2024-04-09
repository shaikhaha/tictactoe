// Sedan.h
#ifndef SEDAN_H
#define SEDAN_H

#include <iostream>
#include <string>
#include "Car.h"

class Sedan : public Car {
private:
    bool sunroof;

public:
    Sedan();
    explicit Sedan(std::string color, std::string brand, const Engine& engine, bool sunroof);

    bool getSunroof() const;

    std::string getType() const override;

    void saveCar(std::ostream& output) const override;
};

#endif
