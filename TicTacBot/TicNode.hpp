//
//  TicNode.hpp
//  TicTacBot
//
//  Created by Administrator on 9/27/18.
//  Copyright © 2018 Allen. All rights reserved.
//

#ifndef TicNode_hpp
#define TicNode_hpp

#include <string>

class TicNode {
private:
    double external[9]; //Inputs
    double internal;   //Calculated output
public:
    double getValue();
    void give(double value, int location);
    
    
    
    
};

#endif /* TicNode_hpp */
