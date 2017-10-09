//
// Created by Tom Guo on 09/10/2017.
//

#include <iostream>

#include "../Utility/output.h"

int main(){

    using namespace std;

    int cards[10] {};
    int cars[10] = {0};
    int persons[10] = {1};
    int trees[10];

    outputArray(cards, 10);
    outputArray(cars, 10);
    outputArray(persons, 10);
    outputArray(trees, 10);

    return 0;
}