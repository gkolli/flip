//
// Created by Naren Kolli on 2020-05-26.
//

#include "Card.h"

Card::Card(value_test initialVal, suit_test initialSuit) : //card constructor with placed initial values
        cardValue(initialVal), cardSuit(initialSuit) { //below: check ranges, throw exception if out of bounds

    if (initialSuit < 0 || initialSuit > 3) {
        throw outOfRAngeError("Suit is out of range, check value");
    }
    if (initialVal < 2 || initialVal > 14) {
        throw outOfRAngeError("Card is out of range, check value");
    }
}

Card::Card(const Card & copied) { //copy constructor

    cardSuit = copied.cardSuit;
    cardValue = copied.cardValue;
}


void Card::SetSuit(suit_test newSuit) { //check if suit is in range
    if (newSuit < 0 || newSuit > 3) {
        throw outOfRAngeError("Suit is out of range, check value");
    }
    cardSuit = newSuit;
}

void Card::SetValue(value_test secondCard) { //check if card value is in range
    if (secondCard < 2 || secondCard > 14) {
        throw outOfRAngeError("Card is out of range, check value");
    }
    cardValue = secondCard;
}


Card& Card::operator=(const Card &originCard) { //overriding of assignment operator

    cardSuit = originCard.cardSuit;
    cardValue = originCard.cardValue;

    return *this; //returning overriden card

}

ostream& operator<<(ostream& out, const Card& givenCard) {


    string suitValue;

    switch (givenCard.cardSuit) {
        case CLUB:
            suitValue = "Club";
            break;
        case DIAMOND:
            suitValue = "Diamond";
            break;
        case HEART:
            suitValue = "Heart";
            break;
        case SPADE:
            suitValue = "Spade";
            break;
    }


    string output;

    //What to output based off of the card value
    switch (givenCard.cardValue) {
        case(ACE) :
            output = "Ace";
            break;
        case(JACK) :
            output = "Jack";
            break;
        case(QUEEN) :
            output = "Queen";
            break;
        case(KING) :
            output = "King";
            break;
        default:
            output = to_string(givenCard.cardValue);
    }


    out << output << " of " << suitValue;

    return out;
}