#include "Student.h"
using namespace std;
#include<iostream>



	string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];

	int total = 0;


	void student_Management::enter()

	{

		int ch = 0;
		cout << endl;

		cout << "How many students do u want to enter ? " << endl

			 << "-> ";

		cin >> ch;

		if (total == 0)

		{

			total = ch + total;

			for (int i = 0; i < ch; i++)

			{

				cout << "\n                                    ==> Enter the Data of student " << i + 1 << endl
					 << endl;

				cout << "Enter the full name " << endl
					 << "-> ";

				getline(cin >> ws, arr1[i]);

				cout << "Enter the Roll no " << endl
					 << "-> ";

				cin >> arr2[i];

				cout << "Enter the course " << endl
					 << "-> ";

				getline(cin >> ws, arr3[i]);

				cout << "Enter the level " << endl
					 << "-> ";

				getline(cin >> ws, arr4[i]);

				cout << "Enter the contact " << endl
					 << "-> ";

				cin >> arr5[i];
			}
		}

		else

		{

			for (int i = total; i < ch + total; i++)

			{

				cout << "\n                                ==> Enter the Data of student " << i + 1 << endl
					 << endl;

			cout << "Enter the full name " << endl
					 << "-> ";

				getline(cin >> ws, arr1[i]);

				cout << "Enter the Roll no " << endl
					 << "-> ";

				cin >> arr2[i];

				cout << "Enter the course " << endl
					 << "-> ";

				getline(cin >> ws, arr3[i]);

				cout << "Enter the level " << endl
					 << "-> ";

				getline(cin >> ws, arr4[i]);

				cout << "Enter the contact " << endl
					 << "-> ";

				cin >> arr5[i];
			}

			total = ch + total;
		}
	}

	void student_Management::show()

	{

		if (total == 0)

		{

			cout << "No data is entered to show. " << endl;
		}

		else
		{

			for (int i = 0; i < total; i++)

			{

				cout << "\n                                     ==> Data of Student " << i + 1 << endl
					 << endl;

				cout << "Name :" << arr1[i] << endl;

				cout << "Roll no : " << arr2[i] << endl;

				cout << "Course : " << arr3[i] << endl;

				cout << "Level : " << arr4[i] << endl;

				cout << "Contact : " << arr5[i] << endl;
			}
		}
	}

	void student_Management::search()

	{

		if (total == 0)

		{

			cout << "No data is entered to search. " << endl;
		}

		else
		{

			string rollno;

			cout << "Enter the roll no of student" << endl;

			cin >> rollno;

			for (int i = 0; i < total; i++)

			{

				if (rollno == arr2[i])

				{

					cout << "Name : " << arr1[i] << endl;

					cout << "Roll no : " << arr2[i] << endl;

					cout << "Course : " << arr3[i] << endl;

					cout << "Level : " << arr4[i] << endl;

					cout << "Contact : " << arr5[i] << endl;
				}
			}
		}
	}

	void student_Management::update()

	{

		if (total == 0)

		{

			cout << "No data is entered to update. " << endl;
		}

		else
		{

			string rollno;

			cout << "Enter the roll no of student which you want to update" << endl;

			cin >> rollno;

			for (int i = 0; i < total; i++)

			{

				if (rollno == arr2[i])

				{

					cout << "\nPrevious data" << endl
						 << endl;

					cout << "                                                     ==> Data of Student " << i + 1 << endl;

					cout << "Name : " << arr1[i] << endl;

					cout << "Roll no : " << arr2[i] << endl;

					cout << "Course : " << arr3[i] << endl;

					cout << "Level : " << arr4[i] << endl;

					cout << "Contact : " << arr5[i] << endl;

					cout << "\nEnter new data" << endl
						 << endl;

					cout << "Enter the full name  : " << endl
						 << "-> ";

					cin >> arr1[i];

					cout << "Enter the Roll no : " << endl
						 << "-> ";

					cin >> arr2[i];

					cout << "Enter the course : " << endl
						 << "-> ";

					cin >> arr3[i];

					cout << "Enter the level : " << endl
						 << "-> ";

					cin >> arr4[i];

					cout << "Enter the contact : " << endl
						 << "-> ";

					cin >> arr5[i];
				}
			}
		}
	}

	void student_Management::deleterecord()

	{

		if (total == 0)

		{

			cout << "No data is entered" << endl;
		}

		else
		{

			int a;

			cout << "Press 1 to delete all record" << endl;

			cout << "Press 2 to delete specific record" << endl;

			cin >> a;

			if (a == 1)

			{

				total = 0;

				cout << "All record is deleted..!!" << endl;
			}

			else if (a == 2)

			{

				string rollno;

				cout << "Enter the roll no of student which you wanted to delete" << endl;

				cin >> rollno;

				for (int i = 0; i < total; i++)

				{

					if (rollno == arr2[i])

					{

						for (int j = i; j < total; j++)

						{

							arr1[j] = arr1[j + 1];

							arr2[j] = arr2[j + 1];

							arr3[j] = arr3[j + 1];

							arr4[j] = arr4[j + 1];

							arr5[j] = arr5[j + 1];
						}

						total--;

						cout << "Your required record is deleted" << endl;
					}
				}
			}

			else

			{

				cout << "Invalid input";
			}
		}
	}


