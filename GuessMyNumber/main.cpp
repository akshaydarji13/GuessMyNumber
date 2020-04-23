//
//  main.cpp
//  GuessMyNumber
//  The classic number guessing game
//
//  Created by Akshay Darji on 23/04/20.
//  Copyright © 2020 Akshay Darji. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  typedef unsigned int uint;
  srand(static_cast<uint>(time(0)));
  
  int secretNumber = rand() % 100 + 1;
  
  int tries = 0;
  int guess;
  
  cout << "\tWelcome to Guess My Number\n\n";
  
  do {
    cout << "Enter a guess: ";
    cin >> guess;
    ++tries;
    
    if (guess > secretNumber) {
      cout << "Too High!\n\n";
    } else if (guess < secretNumber) {
      cout << "Too Low!\n\n";
    } else {
      cout << "That's it! You got it in " << tries << " guesses!\n";
    }
  } while (guess != secretNumber);
  
  return 0;
}
