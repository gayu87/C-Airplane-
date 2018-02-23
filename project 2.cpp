                    // project 2
                    // programmed by: Gayatri Patel
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
 // function prototype
void table(char a[13][6]);
void  reserve(char a[13][6], int first, int last, int &row, char &seat);
void tickettype(char a[13][6], char &x, int &row, char &seat);
int main()    // main function
{
	char a[13][6];
	int row;
	char seat;
	char x;
	table(a);
	char input = ' ';
	cout << "To reserve a seat enter Y/y(yes), N/n (no): ";
	cin >> input;
	while (input == 'y' || input == 'Y')
	{
		tickettype(a, x, row, seat); // calling function 
		cout << "* -- available seat" << endl;
		cout << "x -- occupied seat" << endl;
		cout << endl;
		cout << "Row 1 and 2 are for the first class passengers." << endl;
		cout << "Row 3 through 7 are for business class passengers." << endl;
		cout << "Row 8 through 13 are for economy class passenders." << endl;
		cout << endl;
		cout << "To reserve a seat enter Y/y(yes), N/n (no): ";
		cin >> input;
	}
	if (input == 'n' || input == 'N')
		cout << " you have select no." << endl;
	cout << endl;
	return 0;
}
void table(char a[13][6])  //function to disply table(seat assignment)
{
	cout << "This program assigns seats for a commercial airplane." << endl;
	cout << "The current seat aasignments is as follows" << endl;
	for (int i = 0; i <13; i++)
	{
		for (int j = 0; j < 6; j++)
			a[i][j] = '*';
	}
	cout << "         A  B  C   D  E  F" << endl;
	for (int i = 0; i <13; i++)
	{
		cout << "Row" << setw(3) << i + 1 << "   ";
		for (int j = 0; j < 6; j++)
		{
			if (j == 3)
			{
				cout << " ";
			}
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "* -- available seat" << endl;
	cout << "x -- occupied seat" << endl;
	cout << endl;
	cout << "Row 1 and 2 are for the first class passengers." << endl;
	cout << "Row 3 through 7 are for business class passengers." << endl;
	cout << "Row 8 through 13 are for economy class passenders." << endl;
	cout << endl;
}
void  reserve(char a[13][6], int first, int last, int &row, char &seat)  //function to reserve seat
{
	do {
		cout << "enter the Row number: " << first << " - " << last << ": ";
		cin >> row;
		cout << endl;
	} while (row<first || row>last);
	do{
		cout << "enter seat number (A-F): ";
		cin >> seat;
		cout << endl;
	} while (seat<'A' || seat>'F');
	
	cout << endl;
	if (a[row - 1][seat - 'A'] == 'x')         // this if condition checks if seat is already aasigned or not
	{
		cout << "This seat is already assigned. Choose another seat: " << endl;
	}
	else if (a[row - 1][seat - 'A'] = 'x')
	{
	cout << "This seat is reserved for you." << endl;
	cout << "         A  B  C   D  E  F" << endl;

	for (int i = 0; i < 13; i++)
	{
		cout << "Row" << setw(3) << i + 1 << "   ";
		for (int j = 0; j < 6; j++)
		{
			if (j == 3)
			{
				cout << " ";
			}
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	
	cout << "* -- available seat" << endl;
	cout << "x -- occupied seat" << endl;
	cout << endl;
	cout << "This program assigns seats for a commercial airplane." << endl;
	cout << "The current seat aasignments is as follows" << endl;
	cout << endl;
	cout << "         A  B  C   D  E  F" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << "Row" << setw(3) << i + 1 << "   ";
		for (int j = 0; j < 6; j++)
		{
			if (j == 3)
			{
				cout << " ";
			}
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}
	
}
void tickettype(char a[13][6], char &x, int &row, char &seat)     // function to select ticket class
{
	cout << endl;
	cout << "Enter a ticket type: F/f (first class); (B/b) (businees class); E/e (economy class): ";
	cin >> x;
	cout << endl;
	switch (x)       // switch statment to perform task according to user choice
	{
	case 'F':
	case'f':
		reserve(a, 1, 2, row, seat);    // calling function
		break;
	case 'B':
	case'b':
		reserve(a, 3, 7, row, seat);   // calling function
		break;
	case 'E':
	case 'e':
		reserve(a, 8, 13, row, seat);    // calling function
		break;
	default:
		cout << " invalid class. select correct class " << endl;
	}
	cout << endl;
}

