//
// Created by Naren Kolli on 2020-05-26.
//

#ifndef FLIP_CARD_H
#define FLIP_CARD_H

#include <iostream>

#include <string>

#include "Exceptions.h"

using namespace std;

enum suit_test { CLUB, DIAMOND, HEART, SPADE };

enum value_test { ACE, TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING};

class Card {

private:

    suit_test cardSuit;
    value_test cardValue;

public:

    Card(value_test initValue = THREE, suit_test initSuit = SPADE ); //constructor

    Card(const Card& other); //copy constructor

    void SetSuit(suit_test setSuit); //setting the card's suit

    suit_test GetSuit() {  //getting the card's suit

        return cardSuit;
    };

    void SetValue(value_test setValue); //setting the card's value

    value_test GetValue() {  //getting the card's value

        return cardValue;

    };

    Card& operator=(const Card& originCard); //overloaded assignment operator

    friend ostream& operator<<(ostream& os, const Card& card); //friend function print override

};

#endif //FLIP_CARD_H
