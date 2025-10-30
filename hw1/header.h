#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Human {
private:
    int age;
    double height;
    string name;
    bool st_of_work;
public:
    Human(int age1, double height1, string name1, bool st_of_work1) {
        age = age1;
        height = height1;
        name = name1;
        st_of_work = st_of_work1;
    };
    ~Human() {}
    void dates() {
        cout << "Age: " << this->age << endl;
        cout << "Height: " << this->height << endl;
        cout << "Name: " << this->name << endl;
        cout << "Status of work: " << this->st_of_work << endl;
    };
};