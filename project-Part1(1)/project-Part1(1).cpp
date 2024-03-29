/* project-Part1.cpp :
This file contains the 'main' function. Program execution begins and ends there.
The Main Menu: get the user's menu choice. Make sure to validate the choice.
Write the loop so that the program goes back to the go back to main menu after the requested task is completed.
If you have not written the code to complete the requested task in your program,
"This task is not complete" message to the user  for now and go back to displaying the main menu. Later,
you will complete the missing parts of the program and submit with your final project submission.
*/

#include "pch.h"
#include<iostream>
#include<iomanip>

using namespace std;
int main() {

	//Variables to be declared
	int choice;
	char back;
	/*
		using this variables for later parts of the project...
		'double StudentID, Exam1Grade, Exam2Grade, Exam3Grade, average;'
	*/

	do {
		cout << "=======================================================" << endl;
		cout << "|           Capstone Project Deliverable              |" << endl;
		cout << "=======================================================" << endl;

		//display the menu and get a choice
		cout << "+-----------------------------------------------------+" << endl;
		cout << "|1. Input a student grade                             |\n"
			 << "|2. Display all grades                                |\n"
			 << "|3. Display a Student's exam statistics               |\n"
		     << "|4. Display an Exam's statistics                      |\n"
			 << "|5. Exit                                              |\n";
		cout << "+-----------------------------------------------------+" << endl;


		/////////////////////////////////////////////////////////////////////
		//      Input Menu choice here:                                    //
		//                                                                 //
		cout << "Enter your selection (1-5):                          \n"; //
		cin >> choice;                                                     //
		//                                                                 //
		/////////////////////////////////////////////////////////////////////


		/////////////////////////////////////////////////
		//         If Statements choices               //
		/////////////////////////////////////////////////

		if (choice == 1) { // CHOICE 1 ======================================

			// Get three test scores
			system("cls");

			cout << "Information about 'input grades' not availbale..." << endl;
			cout << "Data coming soon..." << endl;
				/*
				 Does the user want to go back to main menu?
				*/
			cout << "Do you want to go back to Main Menu? (Y/N) ";
			cin >> back;

		} // ------------------------------------------------------------------------
		if (choice == 2) { // CHOICE 2 ======================================

			// Get three test scores
			system("cls");

			cout << "Information 'Display all grades' not availbale..." << endl;
			cout << "Data coming soon..." << endl;
				/*
				 Does the user want to go back to main menu?
				*/
			cout << "Do you want to go back to Main Menu? (Y/N) ";
			cin >> back;

		}// ------------------------------------------------------------------------
		if (choice == 3) { // CHOICE 3 ======================================

			// Get three test scores
			system("cls");

			cout << "Information about Display a 'Student's exam statistics' not availbale..." << endl;
			cout << "Data coming soon..." << endl;
				/*
				 Does the user want to go back to main menu?
				*/
			cout << "Do you want to go back to Main Menu? (Y/N) ";
			cin >> back;

		}// ------------------------------------------------------------------------
		if (choice == 4) { // CHOICE 4 ======================================

			// Get three test scores
			system("cls");

			cout << "Information about 'Exam's statistics' not availbale..." << endl;
			cout << "Data coming soon..." << endl;
				/*
				 Does the user want to go back to main menu?
				*/
			cout << "Do you want to go back to Main Menu? (Y/N) ";
			cin >> back;

		}// ------------------------------------------------------------------------
		if (choice == 5) { // CHOICE 5 ======================================

			cout << "Thank you, goodbye..." << endl;
				/*
					 Does the user want to go back to main menu?
				*/
			cout << "Press 'Y' to continue or 'N' to quit!!" << endl; // Y to main menu 
			cin >> back;                                              // N to quit
		}// ------------------------------------------------------------------------
		system("cls"); // back to the main menu by clearing the screen
	} while (back == 'Y' || back == 'y');

	system("pause");
	return 0;
	}

