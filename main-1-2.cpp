#include <iostream>
#include "Person.h"

int main() {
    int n;
    std::cout << "Enter the number of Person structs to create: ";
    std::cin >> n;

    PersonList personList = createPersonList(n);

    // Print the details of each person
    for (int i = 0; i < personList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ":\n";
        std::cout << "Name: " << personList.people[i].name << std::endl;
        std::cout << "Age: " << personList.people[i].age << std::endl;
    }

    // Free the allocated memory
    delete[] personList.people;

    return 0;
}
