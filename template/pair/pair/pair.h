//
//  pair.h
//  pair
//
//  Created by LYT on 07/04/2019.
//  Copyright © 2019 Kiki Tan. All rights reserved.
//

#include <iostream>
#ifndef pair_h
#define pair_h


template <class T>
class Pair1
{
protected:
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



template <class T1, class T2>
class Pair{
protected:
    T1 p1;
    T2 p2;

public:

    // constructor
    Pair (T1 _p1, T2 _p2);

    // member functions
    T1 &first();

    T2 &second();

    const T1 &first() const;

    const T2 &second() const;
};



template <class T2>
class StringValuePair: public Pair<std::string, T2>{
    
public:
    // constructor
    StringValuePair(std::string _p1, T2 _p2) :Pair<std::string, T2>(_p1, _p2){}
};


void testPair1();

void testPair();

#endif /* pair_h */
