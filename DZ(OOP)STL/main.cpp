#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student
{
    
    friend ostream& operator<<(ostream& os, Student& obj);
public:
    string name; 
    string surname; 
    int course; 

    Student()=default;
    Student( string nm);
    Student(string nm, string snm);
    Student(string nm, string snm, int crs);
    
    




};
ostream& operator<<(ostream& os, Student& obj)
{
    os << obj.name <<","<< obj.surname << ","<<obj.course << endl; 
    return os;
}

void PrintV(vector<Student> gr) {

    for (auto pt = gr.begin(); pt != gr.end(); pt++)
    {
        cout << *pt << endl;

    }

 }

void PrintVV(vector<Student> gr) {

    for (int i = 0; i <3; i++)
    {
        cout << gr[i] << endl;

    }

}

void main()
{

    srand(time(0));
    Student a("Bil","Feljhjd",5);
    Student b("Dsvb", "Tbtgr", 1);
    Student c("Cgxgr", "Iloluilui", 2);
    Student d("Abuthj", "Gcdf", 2);
    Student e("Utgr", "Dgbtr", 3);
    Student f("Eqsr", "Mgrytr", 4);

    vector<Student> Group{ a,b,c,d,e,f };

    PrintV(Group);
    cout << "_______________________________________________"<<endl;
    sort(Group.begin(), Group.end(), [](Student& a, Student& b) {
        return a.name < b.name;
        });
    cout << "_______________________________________________" << endl; 
    PrintV(Group); 

    sort(Group.begin(), Group.end(), [](Student& a, Student& b) {
        return a.surname < b.surname;
        });
    cout << "_______________________________________________" << endl; 
    PrintV(Group);

    sort(Group.begin(), Group.end(), [](Student& a, Student& b) {
        return a.course < b.course;
        });
    cout << "_______________________________________________" << endl;
    PrintVV(Group);
}

Student::Student( string nm)
{
    name = nm;
}

Student::Student(string nm, string snm):Student(nm)
{
    surname = snm;
}

Student::Student(string nm, string snm, int crs):Student(nm,snm)
{
    course = crs;
}




