#include<bits/stdc++.h>
using namespace std;
    class Student{     
    private:
    int rollNumber;
    string name;
    float marks;

    public:
    //constructor
    Student(){
        rollNumber = 0;
        name=" ";
        marks=0.0;
    }
    //function to input details 
    void input(){
        cout<< "Enter Roll Number: ";
        cin>> rollNumber;
        cin.ignore();
        cout<< "Enter Name: ";  
        getline(cin, name);
        cout<< "Enter Marks: ";
        cin>> marks;
 }
    //function to output details
    void display(){
        cout<< "Roll Number: " << rollNumber << endl;
        cout<< "Name: " << name << endl;
        cout<< "Marks: " << marks << endl;
    }
    //deconstructor
    ~Student(){

            cout<< " Student object with roll number " << rollNumber << " is being deleted." << endl;
    }
};
int main()
{
    int n;
    cout<< "Enter number of students: ";
    cin>> n;

    //dynamic allocation of Student objects
    Student* students = new Student[n];

    //input details for each student
    for(int i=0; i<n; i++){
        cout<<"\n enter details of student "<<i+1<<endl;
        students[i].input();
    }
    //display details
    cout<<"\n Roll Number \t Name \t Marks\n";
    for(int i=0;i<n;i++)
    {
        students[i].display();
    }
    //deallocate memory
    delete[] students;
    return 0;
}