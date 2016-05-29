//
// Created by Peter Chen on 5/27/16.
//

#include "CWComponent.h"
#include <iostream>

using namespace std;

using namespace CubeWorld;


CWComponent::CWComponent() {

    cout << "CWComponent constructed" << endl;

}

CWComponent::~CWComponent() {

    cout << "CWComponent deconstructed" << endl;

}

void CWComponent::RemovedFromObject() {

}

void CWComponent::AddedToObject(CWObject cwObject1) {

}







