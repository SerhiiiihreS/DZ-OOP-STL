#include <iostream>
#include <vector>
using namespace std;

class Student
{
    string name;
    string surname;
    int k;
    friend ostream& operator<<(ostream& os, Student& obj);

};
ostream& operator<<(ostream& os, Student& obj)
{
    os << obj.name << endl;
    os << obj.surname << endl;
    os << obj.k << endl;
}
void main()
{
    Student a;

    vector<Student> Group{ a };

    for (auto pt = Group.begin(); pt != Group.end(); pt++)
    {
        cout << *pt << endl;
    }



}
