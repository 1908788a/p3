#include <iostream>
#include "Person.h"

int main() {
    int n;
    std::cout << "Enter the number of Person structs to create: ";
    std::cin >> n;

    Person* people = createPersonArray(n);

    // Print the details of each person
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ":\n";
        std::cout << "Name: " << people[i].name << std::endl;
        std::cout << "Age: " << people[i].age << std::endl;
    }

    // Free the allocated memory
    delete[] people;

    return 0;
}
