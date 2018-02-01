//
// Created by Jun Tung Liew on 1/2/18.
//

#include "dog.h"
#include <string>

using namespace std;
using namespace animals;

Dog::Dog(const string &name, int age) : name(name), age(age) {

}


string Dog::bark() {
    return name.append(" Woof!");
}

