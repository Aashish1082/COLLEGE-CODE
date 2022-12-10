#include <iostream>
using namespace std;
struct student
  {
    int roll_no;
    char name[30];
    int age;
    char address[30];
    int marks;
  };
  
int main()
{
    student std[15];

    for(int i=0; i<15; i++)
    {
    cout <<"\nInput details of student "<<i+1;
    cout << "\nEnter roll number: ";
    cin >> std[i].roll_no;
    cout << "Enter name : ";
    cin >> std[i].name;
    cout << "Enter age : ";
    cin >> std[i].age;
    cout << "Enter address : ";
    cin >> std[i].address;
    cout << "Enter marks : ";
    cin >> std[i].marks;
    }
    
    for(int i = 0; i < 15; i++)
    {
        cout << "\n\nRoll number: " << std[i].roll_no<< endl;
        cout << "Name: " << std[i].name << endl;
        cout << "Age: " << std[i].age << endl;
        cout<<"Address: "<<std[i].address<<endl;
        cout<<"Marks: "<< std[i].marks<<endl;
    }

    return 0;
}