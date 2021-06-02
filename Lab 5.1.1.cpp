#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::string;

class Person
{
public:
	
	// Your code here
	Person(string Name, int Age):name(Name),age(Age) 
	{
		print();
	}

	string GetName() 
	{return name;}

	void print()
	{
		cout << name << " is " <<age << " years old" << endl;
	}
private:
	string name;
	int age;
};

int main()
{
	Person person("Harry", 20);
	
	//Person person;
	//person.name = "Harry";
	//person.age = 23;
	//cout << "Meet " << person.GetName() << ". ";
	//person.print(&person);
	//// Your code here
	//Person human;
	//human.name = "Alex";
	//human.age = 18;
	//cout << "Meet " << human.GetName() << ". ";
	//human.print(&human);
	
	return 0;
}