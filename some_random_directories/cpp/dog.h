//
// Created by Jun Tung Liew on 1/2/18.
//

#ifndef CMAKEAPPLICATION_DOG_H
#define CMAKEAPPLICATION_DOG_H


#include <string>
using namespace std;

namespace animals {
    class Dog
    {
    private:
        string name;
        int age;


    public:
        Dog(const string &name, int age);

        string bark();
    };
}

#endif //CMAKEAPPLICATION_DOG_H
