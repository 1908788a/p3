#include <iostream>
#include "Person.h"

int main() {
    // Create a PersonList
    PersonList originalList;
    originalList.numPeople = 3;
    originalList.people = new Person[3];
    for (int i = 0; i < originalList.numPeople; ++i) {
        originalList.people[i].name = "Bob";
        originalList.people[i].age = 25;
    }

    // Shallow copy the original list
    PersonList copiedList = shallowCopyPersonList(originalList);

    // Print details of copied list to verify
    std::cout << "Copied List:\n";
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ":\n";
        std::cout << "Name: " << copiedList.people[i].name << std::endl;
        std::cout << "Age: " << copiedList.people[i].age << std::endl;
    }

    // Free the allocated memory
    delete[] originalList.people;

    return 0;
}
