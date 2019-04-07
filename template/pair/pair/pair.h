//
//  pair.h
//  pair
//
//  Created by LYT on 07/04/2019.
//  Copyright © 2019 Kiki Tan. All rights reserved.
//

#ifndef pair_h
#define pair_h


template <typename T>
class Pair1
{
private:
    T p1;
    T p2;
    
public:
    // constructor
    Pair1(const T &_p1, const T &_p2);
    
    // define member function
    T& first();
    
    const T & first() const;
    
    T& second();
    
    const T & second() const;
};



#endif /* pair_h */
