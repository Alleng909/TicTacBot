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
    
    //Quick test of checkwin function.
    game->printBoard();
    game->pickSpot(0);
    std::cout << game->checkWin() << " should be " << false << std::endl;
    game->pickSpot(1);
    game->pickSpot(3);
    game->pickSpot(4);
    game->pickSpot(5);
    game->pickSpot(6);
    game->printBoard();
    std::cout << game->checkWin() << " should be " << true << std::endl;
    
    return 0;
}
