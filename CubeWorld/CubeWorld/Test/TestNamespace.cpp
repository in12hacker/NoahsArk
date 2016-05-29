//
// Created by Peter Chen on 5/29/16.
//

#include "TestNamespace.h"
#include <iostream>

using namespace std;

using namespace TestNp;

TestNamespace::TestNamespace() {

    cout << "Constructed!" << endl;
}

TestNamespace::~TestNamespace() {
    cout << "deconstructed" << endl;
}



