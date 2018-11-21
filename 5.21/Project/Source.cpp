#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(string n, int a)
	{
		name = n; age = a;
	}
	void display()
	{
		cout << "Name: " << name << "\tAge: " << age << endl;
	}
private:
	string name;
	int age;
};
class Employee : public Person
{
public:
	Employee(string n, int a, string c) :Person(n, a)
	{
		company = c;
	}
private:
	string company;
};

int main()
{
	Person tom("Tom", 23);
	tom.display();

	Employee bob("Bob", 31, "Microsoft");
	bob.display();
	getchar();
	return 0;
}