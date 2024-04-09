// Engine.cpp
#include "Engine.h"

Engine::Engine(std::string model) : model(model) {}

std::string Engine::getModel() const {
    return model;
}

void Engine::saveEngine(std::ostream& output) const {
    output << model;
}