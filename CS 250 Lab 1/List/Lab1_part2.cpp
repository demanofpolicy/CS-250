#include <iostream>
#include<list>
#include<string>
using namespace std;

void AddCourses(list <string>& courses)
{
	courses.push_front("cs 250");
	courses.push_front(" cs 200");
	courses.push_front("cs 210");
	courses.push_front("cs 235");
	courses.push_back("cs 134");
	courses.push_back("cs 211");


}
void SortList(list <string>& courses)
{
    courses.sort();
}
void ReverseList(list <string>& courses)
{
    courses.reverse();
}
void DisplayCourses(list <string>& courses)
{
	int counter = 0;

	for (list <string> ::iterator it = courses.begin(); it != courses.end(); it++)
	{
		if (counter != 0) { cout << " , "; }
		cout << counter++ << " . " << (*it);
	}
}
int main()
{
    list<string> courses;

    cout << "Normal:" << endl;
	AddCourses(courses);
	DisplayCourses(courses);

    cout << endl << "Sorted:" << endl;
    SortList(courses);
	DisplayCourses(courses);


    cout << endl<< "Reverse:" << endl;
    ReverseList(courses);
	DisplayCourses(courses);



	return 0;
}


