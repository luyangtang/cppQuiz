//
//  pair.cpp
//  pair
//
//  Created by LYT on 07/04/2019.
//  Copyright © 2019 Kiki Tan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "pair.h"

template <typename T>
Pair1<T>::Pair1(const T &_p1, const T &_p2):p1(_p1),p2(_p2)
{}

// define member function
template <typename T>
T& Pair1<T>::first()
{
    return p1;
}

template <typename T>
const T &Pair1<T>::first() const
{
    return p1;
}

template <typename T>
T& Pair1<T>::second()
{
    return p2;
}

template <typename T>
const T &Pair1<T>::second() const
{
    return p2;
    }





template <typename T1, typename T2>
Pair<T1,T2>::Pair(T1 _p1, T2 _p2): p1(_p1), p2(_p2)
{};

// member functions
template <typename T1, typename T2>
T1 &Pair<T1,T2>::first()
{
    return p1;
}

template <typename T1, typename T2>
T2 &Pair<T1,T2>::second()
{
    return p2;
}

template <typename T1, typename T2>
const T1 &Pair<T1,T2>::first() const
{
    return p1;

}

template <typename T1, typename T2>
const T2 &Pair<T1,T2>::second() const
{
    return p2;

}



