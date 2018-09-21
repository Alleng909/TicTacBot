//
//  TicBoard.hpp
//  TicTacBot
//
//  Created by Administrator on 9/19/18.
//  Copyright © 2018 Allen. All rights reserved.
//

#ifndef TicBoard_hpp
#define TicBoard_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class TicBoard {
private:
    int board[9];
    int turn;
public:
    TicBoard();
    bool checkWin();
    std::string getBoardString();
    void printBoard();
    bool pickSpot(int i);
    int getTurn();
    
};

#endif /* TicBoard_hpp */
