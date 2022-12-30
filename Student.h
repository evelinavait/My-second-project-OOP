#include "calculations.h"
#include "Human.h"

#ifndef STUDENT_H
#define STUDENT_H

#include <string.h>
#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <iomanip>
//#include <bits/stdc++.h>
#include <ctime>
#include <fstream>
#include <iterator>
#include <algorithm>
using std::vector;
using namespace std;

class Student : public Human
{
public:
    Student() {}; // default constructor
    Student(string line); // constructor
    Student(int id, int grades); // global constructor
    ~Student(); // I. destructor
    Student(const Student& other); // II. copy constructor
    Student& operator = (const Student& other); // III. copy assignment

    // getters, inline
    inline int HowManyGrade() const { return grade_.size(); }
    inline int GetGrade(int number) const { return grade_[number]; }
    float Final() const;

    // setters
    void setExam(int& e) { exam_ = e; }

    // input/output operator
    friend istream& operator>>(istream& in, Student& s);
    friend ostream& operator<<(ostream& out, const Student& s);

private:
    vector<int> grade_;
    float exam_;
};

bool compareName(const Student& a, const Student& b);

bool compareFinal(const Student& a, const Student& b);

#endif // STUDENT_H
