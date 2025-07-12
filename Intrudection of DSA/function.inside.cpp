#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << "total numbers " << name << " = " << math + english << endl;
    }
};
int main()
{
    Student sakib("sakib", 23, 565, 54);
    sakib.total();
    Student sakib1("sakib1", 23, 565, 54);
    sakib1.total();
    return 0;
}