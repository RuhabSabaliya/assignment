#include<iostream>
using namespace std;
class person
{
    public:
    void display()
    {
        cout<<"\n Good Afternoon";
    }
};
class student:public person
{
};
class Teacher:public person
{
};
int main()
{
    student s1;
    s1.display();
    Teacher t1;
    t1.display();
    return 0;
}