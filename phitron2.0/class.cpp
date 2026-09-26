#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    char section;
    double math_mark;
    int cls;
    Student(char name[],int roll,char section,double math_mark,int cls)
    {
        strcpy(this->name,name);
        this->roll=roll;
        this->section=section;
        this->math_mark=math_mark;
        this->cls=cls;
    }

};
int main()
{
    Student rahim("rahim",10,'A',75,12);
    Student karim("karim",1,'A',92.75,12);
    Student mahin("mahin",14,'A',79.75,12);
    cout<<rahim.name<<" "<<rahim.roll<<" "<<rahim.section<<" "<<rahim.math_mark<<" "<<rahim.cls<<endl;
    cout<<karim.name<<" "<<karim.roll<<" "<<karim.section<<" "<<karim.math_mark<<" "<<karim.cls<<endl;
    cout<<mahin.name<<" "<<mahin.roll<<" "<<mahin.section<<" "<<mahin.math_mark<<" "<<mahin.cls<<endl;
    return 0; 
}