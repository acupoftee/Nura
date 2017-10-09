//
//  Classifier.h
//  Neural++
//
//  Created by Bethy Diakabana on 10/7/17.
//  Copyright © 2017 Bethy Diakabana. All rights reserved.
//

#pragma once
#include <vector>
#include <memory>
using namespace std;
namespace neural {
    class Classifier {
    public:
        /**
             returns a set of values given a set of inputs
             @param set of inputs from test data
             @return a set of outputs
         */
        virtual shared_ptr<vector<double>> classify(const vector<double>& inputs) = 0;
    };
}
