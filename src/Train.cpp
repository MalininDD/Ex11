// Copyright 2021 MalininDmitry
#include <iostream>
#include "Train.h"

void Train::addCage(Cage * cage) {
    if ( first ) {
        last->next = cage;
        last = cage;
        last->next = first;
        first->prev = cage;
    } else {
        first = cage;
        first->next = cage;
        first->prev = cage;
        last = cage;
    }
}
void Train::printTrain() {
    Cage * curr;
    curr = first;
    while ( curr != last) {
        std::cout << "light: " << curr->get() << ", address:" << curr << std::endl;
        curr = curr->next;
    }
    std::cout << "light: " << curr->get() << ", address:" << curr << std::endl;
}

int Train::getLengthByAddress() {
    int lenght = 0;
    Cage * curr = first;
    while (curr != last) {
        lenght++;
        curr = curr->next;
    }
    lenght++;
    return lenght;
}

int Train::getLengthByLights() {
    first->on();
    int n = 0;
    int copy_n = 0;
    Cage * curr = first->next;
    bool flag = true;
    while (flag) {
        while (!curr->get()) {
            curr = curr->next;
            n++;
        }
        n++;
        curr->off();
        copy_n = n;
        while (copy_n--) {
            curr = curr->prev;
        }
        if (!curr->get()) {
            flag = false;
        } else {
            n = 0;
            curr = first->next;
        }
    }
    return n;
}
