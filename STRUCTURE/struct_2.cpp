#include<iostream>
using namespace std;
struct student
{
	long long roll;
	char name[10];
	int age;
	int marks;
};
int main()
{
	struct student p[5];
	for (int i=0;i<5;i++)
	{
		cout << "Student Roll No: " << i + 1 << endl;
		p[i].roll = i + 1;
		cout<<"Enter the Name of the student:"<<endl;
		cin >> p[i].name;
		cout<<"Enter the Age of the student:" << endl; 
		cin >> p[i].age;
	}
	for (int i = 0; i < 5; i++)
	{
		if (p[i].roll == 2)
		{
			cout << "Roll No : " << p[i].roll<<endl;
			cout << "Name : " << p[i].name << endl;
			cout << "Age: " << p[i].age << endl;
		}
	}
	return 0;
}


