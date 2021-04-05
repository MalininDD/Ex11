// Copyright 2021 MalininDmitry

#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

#include "Cage.h"

class Train {
    Cage* first;  // указатель на первый вагон
    Cage* last;  // указатель на последний вагон
 public:
    Train(): first(nullptr), last(nullptr) {}
    void addCage(Cage * cage);
    void printTrain();
    int getLengthByAddress();
    int getLengthByLights();
};
#endif  // INCLUDE_TRAIN_H_
