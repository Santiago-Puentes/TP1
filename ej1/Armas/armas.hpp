#pragma once
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class armas {
    public:
        virtual string getName() = 0;
        virtual int getLevel() = 0;
        virtual string getType() = 0;
        virtual int getDurability() = 0;
        virtual void repair() = 0;
};