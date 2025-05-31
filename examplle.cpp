#include <iostream>
using namespace std;
struct student
{
    int RollNum;
     int age;
    string namne;
    void Display(student p)
    {
        cout << p.namne  << "Your Profile Hare:" << endl;
        cout << "student Name :" << p.namne << endl;
        cout << "student Roll Number :" << p.RollNum << endl;
        cout << "student Roll Number :" << p.RollNum << endl;
    }

}p;
int main()
{
    student p = {3,"vineet"};
    p.Display(p);
}
