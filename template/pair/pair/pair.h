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

void testPair1();


template <typename T1, typename T2>
class Pair{
private:
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



#endif /* pair_h */
