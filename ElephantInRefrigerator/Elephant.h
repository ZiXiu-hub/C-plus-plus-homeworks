#ifndef ELEPHANT_H
#define ELEPHANT_H

#include <string>

class Elephant {
private:
    std::string name;
    double weight;
public:
    Elephant(const std::string& elephantName, double elephantWeight);
    std::string getName() const;
    double getWeight() const;
    void introduce() const;
};

#endif
