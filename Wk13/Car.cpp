// Car.cpp
#include <iostream>
#include <sstream>
#include "Car.h"

int Car::counter{1};

int Car::getId() const {
    return id;
}

void Car::setColor(std::string color) {
    this->color = color;
}

void Car::setDoors(int doors) {
    this->doors = doors;
}

void Car::setBrand(std::string brand) {
    this->brand = brand;
}

void Car::setEngine(const Engine& engine) {
    this->engine = engine;
}

std::string Car::getColor() const {
    return color;
}

int Car::getDoors() const {
    return doors;
}

std::string Car::getBrand() const {
    return brand;
}

Engine Car::getEngine() const {
    return engine;
}

Car::Car() : Car("Black", "Unknown", Engine("Unknown")) {}

Car::Car(std::string color, std::string brand, const Engine& engine)
    : color(color), brand(brand), engine(engine) {
    id = counter++;
}

std::string Car::toString() const {
    std::ostringstream output;
    output << "A " << color << " " << getType() << ", with " << doors << " doors. Brand: " << brand << ", Engine: " << engine.getModel();
    return output.str();
}

void Car::saveCar(std::ostream& output) const {
    output << getType() << " ";
    output << id << " ";
    output << color << " ";
    output << doors << " ";
    output << brand << " ";
    engine.saveEngine(output);
    output << " ";
}
