#include "Student.h"

Student::Student(int id, int grades)
{
    firstName_ = "V" + ToString(id);
    lastName_ = "P" + ToString(id);
    exam_ = (rand() % 10) + 1;
    for(int i=0; i<grades; i++)
    {
        int g = (rand() % 10) + 1;
        grade_.push_back(g);
    }
}

Student::Student(string line)
{
    istringstream st(line);
    st >> firstName_; //read the firstName
    st >> lastName_; //read the lastName
    for (int i = 0; i< 5; i++){
        string nd;
        st >> nd;
        grade_.push_back(atoi(nd.c_str()));
    }

    st >> exam_;
}

float Student::Final()
{
    int sum = 0;
    int cGrades = grade_.size();
    for(int i=0; i < cGrades; i++)
    {
        sum = sum + grade_[i];
    }

    float vid = sum/(float)cGrades;

    return (0.6 * exam_) + (vid * 0.4);
}

bool compareName(const Student& a, const Student& b)
{
	if (a.firstName() == b.firstName()) return a.lastName() < b.lastName();
	return a.firstName() < b.firstName();
}
