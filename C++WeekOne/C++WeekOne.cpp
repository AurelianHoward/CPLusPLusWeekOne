// C++WeekOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int iSeconds;
int iHours;
int iMinutes;
int iCount = 60;


int main() 
{

	cout << "Enter Time in seconds "; cin >> iSeconds;

	if (iSeconds >= 60)
	{
		iMinutes = iSeconds/60;
		iSeconds = iSeconds % 60;
		
		if (iMinutes >= 60)
		{
			iHours = iMinutes / 60;
			iMinutes = iMinutes % 60;
		}
	}

	cout << "Hours: " << iHours << " Minutes: " << iMinutes << " Seconds: " << iSeconds;


}

//below is the first part of the workshop.

//string sName;
//int iAge;
//int iGrade;

//week one workshop one
//int main() {

	//cout << "Enter Student Name "; cin >> sName;
	//cout << "Enter Age "; cin >> iAge;
	//cout << "Enter Grade "; cin >> iGrade;
	
	//cout << "Student Information \n";
	//cout << "Name: " << sName << "\n";
	//cout << "Age: " << iAge << "\n";
	//cout << "Grade: " << iGrade << "\n";


	//return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
