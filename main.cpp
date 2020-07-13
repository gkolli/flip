#include <iostream>

#include <iostream>

#include "Card.h"
#include "Deck.h"
#include "Exceptions.h"

char getUserInput() { //function to get user's input
    char input;

    cout << "Press 'd' to deal another card or 's' to stop dealing cards" << endl; //options for the user to select
    cin >> input; //Takes in user response

    if (input != 'D' && input != 'd' && input != 'S' && input != 's') { //confirm the correct values were selected, make sure to be case sensitive
        cout << "Try again, the input was not one of the valid options" << endl; //output message
        input = getUserInput(); //Try again
    }
    return input; //Return the action
}

void playFlip() { //theplayFlip() method being used

    Deck flipDeck = Deck(); //create a new deck object named flipDeck
    char input = 'd'; //deal input is selected
    int score = 0; //initialize score variable
    Card flipCard; //card named flipCard

    //Shuffle the deck 3 times
    flipDeck.Shuffle();
    flipDeck.Shuffle();
    flipDeck.Shuffle();

    cout << "Starting the Flip Game by Naren Kolli" << endl; //starting the game output

    while (input != 'S' && input != 's') { //user not hitting stop, so the cards continue to be dealt
        flipCard = flipDeck.Deal(); //flipCard is equal to the first dealt card
        cout << "The card value is: " << flipCard << endl;

        //Calculate the points value based on the card
        switch (flipCard.GetValue()) {
            case ACE:
                score = score + 10;
                break;
            case KING:
                score = score + 5;
                break;
            case QUEEN:
                score = score + 5;
                break;
            case JACK:
                score = score + 5;
                break;
            case SEVEN:
                score = (score) / 2;
                break;
            case TWO:
                score = 0;
                break;
            case THREE:
                score = 0;
                break;
            case FOUR:
                score = 0;
                break;
            case FIVE:
                score = 0;
                break;
            case SIX:
                score = 0;
                break;
        }
        if (flipCard.GetSuit() == HEART) { //if the suit is heart, one point is added
            score += 1;
        }

        flipDeck.Replace(flipCard); //card is replaced

        cout << "Total Points Score: " << score << endl; //total points score is displayed
        cout << "If you would like to keep playing, input 'd'. If not, input 's'?" << endl; //Asks user if game is to be continued
        input = getUserInput(); //get user input for status of next round
    }

    //Output end of game command
    cout << "Game is Over" << endl;
    cout "You have scored: " << score << "points!" << endl;
}

int main() {

    try { //catching exceptions

        playFlip();

    }

    catch (const standardException& base) { //catching base exception error
        cout << base.what() << endl;
        exit(1);
    }

    catch (const outOfRAngeError& range) { //catching range error
        cout << range.what() << endl;
        exit(1);
    }

    cout << "Thank you for playing! Input any key value to exit" << endl; //user can exit if wanted
    string keyVal;
    cin >> keyVal;

    return 0;

}