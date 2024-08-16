#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newList;
    newList.numPeople = pl.numPeople;
    newList.people = pl.people; // Shallow copy
    return newList;
}