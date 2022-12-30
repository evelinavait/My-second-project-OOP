#ifndef HUMAN_H
#define HUMAN_H

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


class Human
{
public:
    virtual ~Human() = 0; // make Human an abstract class by adding "= 0" to the declaration of the destructor

    inline std::string firstName() const { return firstName_; }    // getters, inline
    inline std::string lastName() const { return lastName_; }  // getters, inline

    void setFirstName(string& v) { firstName_ = v; }
    void setLastName(string& p) { lastName_ = p; }

protected:
    string firstName_;
    string lastName_;
};

#endif // HUMAN_H
