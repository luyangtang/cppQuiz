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
