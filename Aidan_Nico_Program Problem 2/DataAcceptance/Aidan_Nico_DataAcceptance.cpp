/* Heading
Your Name - Date  Period
Assignment Name : Take in Data
Display Data, Accept User Response, Display Changed Data
*/

// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int cat_creepy_count;
	char choice_answer;
	// set bool to false and assume they didn't choose 'A'
	bool answersMatcheds = false; // did they get the same answer as you on number 2
	double piGuess;

	int calc_1, calc_2, calc_3, calc_4, calc_5, calc_6, calc_7, calc_8, calc_9, calc_10; // hold int values for calculation

												// User Queries 
	cout << "How many cats is too creepy for old \"ladies\" : ";
	cin >> cat_creepy_count;
	cout << "What answer did you get on the test for number 2 (a/b/c/d) : ";
	cin >> choice_answer;
	if (choice_answer == 'a' || choice_answer == 'A') {
		answersMatcheds = true; // only set to true if choice answer was 'a' or 'A'
	}
	cout << "What is pi : ";
	cin >> piGuess;

	cout << "Give me 5 random whole numbers : " << "\n";
	cout << "Number 1 : ";
	cin >> calc_1;
	cout << "Number 2 : ";
	cin >> calc_2;
	cout << "Number 3 : ";
	cin >> calc_3;
	cout << "Number 4 : ";
	cin >> calc_4;
	cout << "Number 5 : ";
	cin >> calc_5;
	// After questions print out stored data 
	cout << "I think you are correct, " << cat_creepy_count << " cats is pretty creepy. \n";
	cout << boolalpha << "I think that is " << answersMatcheds << " for question 2." << endl; // ENDL different ways to go to newline
	cout << "So you think pi is : " << piGuess << '\n';// another new way

													   // Do some calculations 
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl; // you can do math as output
	calc_4 = calc_2 * calc_3; // storing first
	cout << calc_2 << " * " << calc_3 << " = " << calc_4 << "\n";
	cout << calc_3 << " / " << calc_1 << " = " << calc_1 << "\n";
	calc_10 = calc_5 * calc_2 / calc_4 + calc_1;
	cout << calc_5 << " * " << calc_2 << " / " << calc_4 << " + " << calc_1 << " = " << calc_10 << "\n";
	calc_6 = calc_5 - calc_4 + calc_10;
	cout << calc_5 << " - " << calc_4 << " + " << calc_10 << " = " << calc_6 << endl;
	calc_7 = calc_5 / calc_2 * calc_10 + calc_4 - calc_1;
	cout << calc_5 << " / " << calc_2 << " * " << calc_10 << " + " << calc_4 << " = " << calc_7 << endl;
	calc_8 = calc_7 * calc_10 + calc_1 / calc_3;
	cout << calc_7 << " * " << calc_10 << " + " << calc_1 << " / " << calc_3 << " = " << calc_8 << endl;
	calc_9 = calc_1 + calc_2 * calc_10 / calc_4 - calc_7 + calc_8 * calc_6 * calc_5 / calc_3;
	cout << calc_1 << " + " << calc_2 << " * " << calc_10 << " / " << calc_4 << " - " << calc_7 << " + " << calc_8 << " * " << calc_6 << " * " << calc_5 << " / " << calc_3 << " = " << calc_9 << endl;
	// Pause
	pause();
}