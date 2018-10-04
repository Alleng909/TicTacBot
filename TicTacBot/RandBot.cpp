//
//  RandBot.cpp
//  TicTacBot
//
//  Created by Administrator on 10/4/18.
//  Copyright © 2018 Allen. All rights reserved.
//

#include "RandBot.hpp"

int numPlayStlyes = 1;

RandBot::RandBot() {
    srand(time(0));
    playStyle = 0; //Random playstyle
}

RandBot::RandBot(int style) { //Even though it has a random ability, might be interesting to have pre-planned tactics.
    if (style > numPlayStlyes || style < 0) { //Default random playstyle if number is out of bounds.
        playStyle = 0;
    } else {
        playStyle = style;
    }
}

const int RandBot::getResult(int board[]) {
    if (playStyle == 0) {
        return try0(board);
    } else if (playStyle == 1) {
        return try1(board);
    }
    return 99; //Shouldn't happen.
}

const int RandBot::try0(int board[]) {
    int numOpenSpots = 0;
    std::vector<int> possibleValues;
    for(int i = 0; i < 9; i++) {
        if(board[i] == 0) {
            numOpenSpots++;
            possibleValues.push_back(i);
            
        }
    }
    return possibleValues[rand()%possibleValues.size()];
}

const int RandBot::try1(int board[]) {
    for(int i = 0; i < 9; i++) { //Might just use a while loop.
        if(board[i] == 0) {
            return i;
        }
    }
    return 99; //Shouldn't happen
}
