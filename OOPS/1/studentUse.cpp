#include<iostream>
using namespace std;

#include "student.cpp"

int main()
{
    student s1;
    student *s2 = new student;
    
    s1.roll = 15;
    s1.setAge(12);
    s1.display();

    s2 -> roll = 16;
    s2 ->setAge(17);
    s2->display();
}