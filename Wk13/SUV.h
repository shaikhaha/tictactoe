// SUV.h
#ifndef SUV_H
#define SUV_H

#include <iostream>
#include <string>
#include "Car.h"

class SUV : public Car {
private:
    int cargoSpace;

public:
    SUV();
    explicit SUV(std::string color, std::string brand, const Engine& engine, int cargoSpace);

    int getCargoSpace() const;

    std::string getType() const override;

    void saveCar(std::ostream& output) const override;
};

#endif