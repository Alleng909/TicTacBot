//
//  main.cpp
//  TicTacBot
//
//  Created by Administrator on 9/19/18.
//  Copyright © 2018 Allen. All rights reserved.
//

#include <iostream>

#include "TicBoard.hpp"


int main(int argc, const char * argv[]) {
    std::cout << "Starting Game!\n";
    TicBoard* game = new TicBoard();
    
    bool goodChoice = false;
    
    while (!game->checkWin()) {//Note: Ends game but doesn't say who won, and doesn't resolve ties.
        while(!goodChoice) { //2 human player option. Current code only for taking one correct input.
            game->printBoard();
            int playerInput;
            std::cout << "Please choose a spot (0-8) Player: " << (game->getTurn()-1)%2+1 << " \n";
            std::cin >> playerInput;
            if (game->pickSpot(playerInput)) {
                goodChoice = true;
            } else {
                std::cout << "Sorry, that was not a valid spot, please choose again.\n";
            }
        }
        goodChoice = false;
    }
    game->printBoard();
    
    
    /*Quick test of checkwin function.
    game->printBoard();
    std::cout << game->getBoardString();
    game->pickSpot(0);
    std::cout << game->checkWin() << " should be " << false << std::endl;
    game->pickSpot(1);
    game->pickSpot(3);
    game->pickSpot(4);
    game->pickSpot(6);
    game->pickSpot(7);
    game->printBoard();
    std::cout << game->getBoardString();
    std::cout << game->checkWin() << " should be " << true << std::endl;
    */
    return 0;
}
