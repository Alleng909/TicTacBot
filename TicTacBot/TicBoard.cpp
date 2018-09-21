//
//  TicBoard.cpp
//  TicTacBot
//
//  Created by Administrator on 9/19/18.
//  Copyright © 2018 Allen. All rights reserved.
//

#include "TicBoard.hpp"



TicBoard::TicBoard() {
    turn = 1;
    for (int i = 0; i < 9; i++) {
        board[i] = 0;
    }
}
bool TicBoard::checkWin() {
    for(int i = 0; i < 3; i++) {
        //Checking vertical wins.
        if (board[i] == board[i+3] && board[i] == board[i+6]) {
            return true;
        } //Checking horizontal wins.
        else if (board[3*i] == board[3*i+1] && board[3*i] == board[3*i+2]) {
            return true;
        } //Checking \ diagonal
        else if (board[0] == board [4] && board[0] == board[8]) {
            return true;
        } //Checking / diagonal
        else if (board[2] == board[4] && board [2] == board[6]) {
            return true;
        }
    }
    return false;
}
std::string TicBoard::getBoardString() {
    std::string returnMe;
    
    
    
    return returnMe;
}
void TicBoard::printBoard() {
    std::cout << "Board State: " << turn << std::endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            switch(board[3*i+j]) {
                case 1: std::cout << "X ";
                case -1: std::cout << "O ";
                default: std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
}

bool TicBoard::pickSpot(int i) {
    if (i < 0 || i > 9 || board[i] != 0) {
        return false;
    }
    board[i]+= (turn%2)*2-1; //Means Turn 1 will be marked with a 1, turn 2 with -1, etc...
    return true;
}

int TicBoard::getTurn() {
    return turn;
}







