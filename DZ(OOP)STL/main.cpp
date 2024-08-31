#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student
{
    string name;
    string surname;
    int course;
    friend ostream& operator<<(ostream& os, Student& obj);
public:
    Student()=default;
    Student( string nm);
    Student(string nm, string snm);
    Student(string nm, string snm, int crs);
    const string Getname();
    





};
ostream& operator<<(ostream& os, Student& obj)
{
    os << obj.name <<","<< obj.surname << ","<<obj.course << endl; 
    return os;
}

void Customfilling(int sd)
{
    
    char ch[10];
    for (int i = 0; i < sd; i++) {
        ch[i] = rand()%20;
    } 

    for (int i = 0; i < sd; i++) {
        cout << ch[i] << ",";
    }
    cout << endl;

} 
void PrintV(vector<Student> gr) {

    for (auto pt = gr.begin(); pt != gr.end(); pt++)
    {
        cout << *pt << endl;

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
    cout << "_______________________________________________";
    sort(Group.begin(), Group.end()); 
    PrintV(Group); 

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

const string Student::Getname() 
{
    return name;
} 



