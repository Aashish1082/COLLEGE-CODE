#include <iostream>

using namespace std;

struct Employee 
{
    string name;
    double salary;
    int hours;
};

int main()
{
    Employee employees[10]; 

    for(int i=0; i<10; i++) 
    {
        cout << "Enter the data of Employee " << (i+1) << ": " << endl;
        
        cout << "Enter the name: ";
        getline(cin,employees[i].name); 
        
        cout << "Enter the salary: ";
        cin >> employees[i].salary;     
        
        cout << "Enter the number of hours of work per day: ";
        cin >> employees[i].hours;      
        
        cin.ignore();  
        
        if(employees[i].hours==8)       
            employees[i].salary+=50;
    }
    
    cout << "Name\tSalary" << endl;
    cout << "---------------------" << endl;
    
    for (int i=0; i<10; i++)  
    {  
        
        cout << employees[i].name << "\t" << employees[i].salary << endl;
    }
    
    return 0;
}