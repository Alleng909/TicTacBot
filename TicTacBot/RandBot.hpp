//
//  RandBot.hpp
//  TicTacBot
//
//  Created by Administrator on 10/4/18.
//  Copyright © 2018 Allen. All rights reserved.
//

#ifndef RandBot_hpp
#define RandBot_hpp

#include <stdio.h>
#include <vector>
#include <ctime>
#include <cstdlib>

class RandBot { //Setting up a basic bot so I have an idea of what the TicBot needs, and to test the code.
private:
    int playStyle;
    const int try0(int board[]); //Picks a random number.
    const int try1(int board[]); //Picks lowest unfilled number.
public:
    RandBot();
    RandBot(int playStyle);
    const int getResult(int board[]);
};

#endif /* RandBot_hpp */
