// Car.h
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Engine.h"

class Car {
private:
    std::string color;
    int doors;
    int id;
    std::string brand;
    Engine engine;

public:
    Car();
    explicit Car(std::string color, std::string brand, const Engine& engine);

    int getId() const;

    void setColor(std::string color);
    void setDoors(int doors);
    void setBrand(std::string brand);
    void setEngine(const Engine& engine);

    std::string getColor() const;
    int getDoors() const;
    std::string getBrand() const;
    Engine getEngine() const;

    virtual std::string toString() const final;
    virtual std::string getType() const = 0;

    virtual void saveCar(std::ostream& output) const;
};

#endif
