//
//  MathUtil.cpp
//  Neural++
//
//  Created by Bethy Diakabana on 10/7/17.
//  Copyright © 2017 Bethy Diakabana. All rights reserved.
//

#define _USE_MATH_DEFINES
#include <math.h>
#include "MathUtil.h"
namespace neural {
    using namespace std;
    double MathUtil::sigmoid(double x) {
        return 1.0 / (1.0 + pow(M_E, -x));
    }
}
