#include <iostream>
#include "environment/material.h"

int main() {
    const MaterialCategory mat { MaterialCategory::Wood };
    std::cout << "The material category is: " << mat << "\n";
    return 0;
}