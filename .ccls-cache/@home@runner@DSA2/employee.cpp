#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <cmath>
#include <stdexcept>
#include <cstddef>
#include "employee.h"

using namespace std;


// Employee class implementation

Employee::Employee() noexcept{
    type = "Employee";
}

std::string Employee::getType() const {
    return type;
}