// Copyright 2021 MalininDmitry

#ifndef INCLUDE_CAGE_H_
#define INCLUDE_CAGE_H_

class Cage {
    bool light;  // Свет (вкл/выкл)
 public:
    Cage* next;  // следующий вагон
    Cage* prev;  // предыдущий вагон
    Cage(): light(false), next(nullptr), prev(nullptr) {}
    void setNextandPrev(Cage * next, Cage * prev) {
        this->next = next;
        this->prev = prev;
    }
    void on()  { light = true;    }
    void off() { light = false; }
    bool get() const  { return light;  }
};
#endif  // INCLUDE_CAGE_H_

