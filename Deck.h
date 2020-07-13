//
// Created by Naren Kolli on 2020-05-26.
//

#ifndef FLIP_DECK_H
#define FLIP_DECK_H

#include <stdlib.h>
#include <time.h>

#include "Card.h"
#include "Node.h"
#include "Exceptions.h"

using namespace std;

class Deck {

private:
    node<Card>* initialCard; //Pointer to node of the first card

public:

    Deck(); //Default Constructor
    Deck(const Deck& deckVal); //Copy Constructor

    Card Deal(); //returning first card ('top of the stack') from deck;

    void Replace(Card card); //put card on bottom of deck;

    void Shuffle(); //shuffling the deck;

    Deck& operator=(const Deck& source);

    friend ostream& operator<<(ostream& stream, const Deck& deckVal); //friend function

    ~Deck(); //Destructor
};


#endif //FLIP_DECK_H
