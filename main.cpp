#include <iostream>
#include "Student.cpp"

using namespace std;


int main()

{
	student_Management obj;

	int value;

	while (true)

	{

		cout << " __________________________________________________________________________________________________" << endl;
		cout << "|                                                                                                  |" << endl;
		cout << "|                                                                                                  |" << endl;
		cout << "|                               Student Management System.                                         |" << endl;
		cout << "|                                                                                                  |" << endl;
		cout << "|__________________________________________________________________________________________________|" << endl;

		cout << endl;
		cout << endl;
		cout << "                                    1.To enter data of student." << endl;
		cout << endl;

		cout << "                                    2.To show data of student." << endl;
		cout << endl;
		cout << "                                    3.To search data of student." << endl;
		cout << endl;
		cout << "                                    4.To update data of student." << endl;
		cout << endl;
		cout << "                                    5.To delete data of student." << endl;
		cout << endl;
		cout << "                                    6.To exit" << endl;
		cout << endl;
		cout << endl;

		cout << "Enter what you want to do." << endl
			 << "->";

		cin >> value;
		system("cls");

		switch (value)

		{

		case 1:
			cout << " _________________________________________________________________________________________________" << endl;
			cout << "|                                                                                                 |" << endl;
			cout << "|                                                                                                 |" << endl;
			cout << "|                                     Student Information input.                                  |" << endl;
			cout << "|                                                                                                 |" << endl;
			cout << "|_________________________________________________________________________________________________|" << endl;

			obj.enter();

			break;

		case 2:
			

			cout << " _____________________________________________________________________________________________________________" << endl;
			cout << "|                                                                                                             |" << endl;
			cout << "|                                                                                                             |" << endl;
			cout << "|                                     Student Information.                                                    |" << endl;
			cout << "|                                                                                                             |" << endl;
			cout << "|_____________________________________________________________________________________________________________|" << endl;

			obj.show();

			break;

		case 3:
			cout << " _______________________________________________________________________________________________________________" << endl;
			cout << "|                                                                                                               |" << endl;
			cout << "|                                                                                                               |" << endl;
			cout << "|                                       Search student Information.                                             |" << endl;
			cout << "|                                                                                                               |" << endl;
			cout << "|_______________________________________________________________________________________________________________|" << endl;

			obj.search();

			break;

		case 4:
			cout << " __________________________________________________________________________________________________________________________" << endl;
			cout << "|                                                                                                                          |" << endl;
			cout << "|                                                                                                                          |" << endl;
			cout << "|                                                  Update student Information.                                             |" << endl;
			cout << "|                                                                                                                          |" << endl;
			cout << "|__________________________________________________________________________________________________________________________|" << endl;
			obj.update();

			break;

		case 5:
			cout << " __________________________________________________________________________________________________________________________" << endl;
			cout << "|                                                                                                                          |" << endl;
			cout << "|                                                                                                                          |" << endl;
			cout << "|                                                  Delete student Information.                                             |" << endl;
			cout << "|                                                                                                                          |" << endl;
			cout << "|__________________________________________________________________________________________________________________________|" << endl;

			obj.deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout << "Invalid input" << endl;

			break;
		}
	}
}