//
//  TicBot.hpp
//  TicTacBot
//
//  Created by Administrator on 9/27/18.
//  Copyright © 2018 Allen. All rights reserved.
//

#ifndef TicBot_hpp
#define TicBot_hpp

#include <string>
#include <iostream>
#include "TicNode.hpp"

/*
 General idea: Creates layers of nodes and communicates data between them and main.
 Feeds the nodes the parameters for construction by reading in a txt file.
 */

class TicBot {
private:
    TicNode* firstLayer[9];
    TicNode* secondLayer[9];
    TicNode* thirdLayer[9];
    void calcSecond();
    void calcThird();
public:
    TicBot();
    void setFirstLayer(double value, int location);
    int getResult();
    
};

#endif /* TicBot_hpp */
