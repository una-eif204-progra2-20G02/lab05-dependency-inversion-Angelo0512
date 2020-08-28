//
// Created by Angelo on 28/8/2020.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_SENDER_H

#define LAB05_DEPENDENCY_INVERSION_SOLUTION_SENDER_H

#include <string>

class Sender {
public:
    virtual std::string sendPayment() const = 0;
};

#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_SENDER_H