// Engine.h
#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
private:
    std::string model;

public:
    explicit Engine(std::string model);

    std::string getModel() const;
    void saveEngine(std::ostream& output) const;
};

#endif
