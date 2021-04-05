// Copyright 2021 MalininDmitry
#include <iostream>
#include "Cage.h"
#include "train.h"

int main() {
    Cage c1{};
    Cage c2{};
    c2.on();
    Cage c3{};
    c3.on();
    Cage c4{};
    Cage c5{};
    Cage c6{};
    c6.on();
    Cage c7{};
    Cage c8{};
    c8.on();
    c1.setNextandPrev(&c2, &c8);
    c2.setNextandPrev(&c3, &c1);
    c3.setNextandPrev(&c4, &c2);
    c4.setNextandPrev(&c5, &c3);
    c5.setNextandPrev(&c6, &c4);
    c6.setNextandPrev(&c7, &c5);
    c7.setNextandPrev(&c8, &c6);
    c8.setNextandPrev(&c1, &c7);
    Cage * cages[8] = {&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8};
    Train tr{};
    for (Cage * item : cages) {
        tr.addCage(item);
    }
    std::cout << tr.getLengthByAddress() << std::endl;
    std::cout << tr.getLengthByLights() << std::endl;
    tr.printTrain();
    return 0;
}
