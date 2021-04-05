// Copyright 2021 Dmitry Malinin
#include <string>
#include "gtest/gtest.h"
#include "Cage.h"
#include "train.h"
TEST(MyEx11Test, test1) {
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
    EXPECT_EQ(tr.getLengthByAddress(), tr.getLengthByLights());
}

TEST(MyEx11Test, test2) {
    Cage c1{};
    c2.on();
    Cage c2{};
    c2.on();
    Cage c3{};
    c3.on();
    Cage c4{};
    c4.on();
    Cage c5{};
    c5.on();
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
    EXPECT_EQ(tr.getLengthByAddress(), tr.getLengthByLights());
}

TEST(MyEx11Test, test3) {
    Cage c1{};
    Cage c2{};
    Cage c3{};
    Cage c4{};
    Cage c5{};
    Cage c6{};
    Cage c7{};
    Cage c8{};
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
    EXPECT_EQ(tr.getLengthByAddress(), tr.getLengthByLights());
}

TEST(MyEx11Test, test4) {
    Cage c1{};
    Cage c2{};
    c2.on();
    Cage c3{};
    Cage c4{};
    c1.setNextandPrev(&c2, &c4);
    c2.setNextandPrev(&c3, &c1);
    c3.setNextandPrev(&c4, &c2);
    c4.setNextandPrev(&c1, &c3);
    Cage * cages[4] = {&c1, &c2, &c3, &c4};
    Train tr{};
    for (Cage * item : cages) {
        tr.addCage(item);
    }
    EXPECT_EQ(tr.getLengthByAddress(), tr.getLengthByLights());
}
