#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char word[30]; //Contain the secret word
    char letter[1]; //Contains the letter the player is trying to guess
    char secret[30]; //Contains the word while it is being unraveled
    int size; //Contains the size
    int i; //Index to deal with arrays 
    int chances; //Limit attempts
    int hits; //Words hitted
    bool hit; //Check if the letter are right or wrong

    //Control variables
    chances = 3;
    size = 0;
    i = 0;
    hit = false;
    hits = 0;

    cout << "The first player must enter a word, without the second player seeing\n";
    cin >> word;
    system("cls"); //Clears what was typed on the screen

    while (word[i] != '\0') { // The \0 Indicates the end of the string
        i++; //Move to next letter
        size++; //Increase the size
    }
    //Fill the letters with dashes
    for (i = 0; i < 30; i++) {
        secret[i] = '_';
    }

    // The main loop, when you still have a chance and get the letters right
    while ((chances > 0) && (hits < size)) {
        cout << "Remaining chances: " << chances << "\n\n";
        cout << "Secret word: ";
        //Word reveal
        for (i = 0; i < size; i++) {
            cout << secret[i];
        }
        //Save the entered letter
        cout << "\n\nEnter a letter: ";
        cin >> letter[0];
        //Check if it contains the letter in the secret word
        for (i = 0; i < size; i++){
            if (word[i] == letter[0]){
                hit = true;
                secret[i] = word[i];
                hits++;
            }
        }
        //Decreases the chances if the letter is incorrect
        if (!hit)
        {
            chances--;
        }
        //Clear the screen and return to false settings
        hit = false;
        system("cls");
    }
    //End of the game, result if the player won or lost
    if (hits == size)
    {
        cout << "You win!!!\n";
    }
    else {
        cout << "Oh no, you lost!\n";
    }
    return 0;
}
 