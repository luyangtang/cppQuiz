//
//  template.cpp
//  pair
//
//  Created by LYT on 07/04/2019.
//  Copyright © 2019 Kiki Tan. All rights reserved.
//

#include <stdio.h>
#include "pair.h"
#include "pair.cpp"

template class Pair1<int>;
template class Pair1<double>;

template class Pair<int, double>;
template class Pair<double,int>;

template class Pair<std::string,int>;

