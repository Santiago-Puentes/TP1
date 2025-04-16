#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <memory>


using namespace std;

class personaje {
    public:
        virtual string getName() = 0;
        virtual string getType() = 0;
        virtual int getMana() = 0;
        virtual int getHP() = 0;
        virtual ~personaje() = default;
};