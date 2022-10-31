#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct menuitem
{
	string menulist;
	double price;
};

menuitem menu[9];
void getData();
void showMenu();
void selectItems();
void printCheck();
int c[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

int main()
{
	double t;
	getData();
	showMenu();
	selectItems();
	printCheck();

	return 0;
}

//Food and Prices
void getData()
{
	menu[1].menulist = "Plain Egg";
	menu[1].price = 1.45;
	menu[2].menulist = "Bacon and Egg";
	menu[2].price = 2.45;
	menu[3].menulist = "Muffin";
	menu[3].price = 00.99;
	menu[4].menulist = "French Toast";
	menu[4].price = 1.99;
	menu[5].menulist = "Fruit Basket";
	menu[5].price = 2.49;
	menu[6].menulist = "Cereal";
	menu[6].price = 00.69;
	menu[7].menulist = "Coffee";
	menu[7].price = 0.50;
	menu[8].menulist = "Tea";
	menu[8].price = 0.75;
}


void showMenu()
{
	//Menu display
	cout << "===============================================" << endl;
	cout << right << setw(36) << "WELCOME TO BREAKFAST CLOUDS" << endl;
	cout << "===============================================" << endl;
	cout << endl;
	cout << setw(5) << 1 << "\t" << menu[1].menulist << setw(21) << "$" << setprecision(2) << fixed << menu[1].price << endl;
	cout << setw(5) << 2 << "\t" << menu[2].menulist << setw(17) << "$" << setprecision(2) << fixed << menu[2].price << endl;
	cout << setw(5) << 3 << "\t" << menu[3].menulist << setw(24) << "$" << setprecision(2) << fixed << menu[3].price << endl;
	cout << setw(5) << 4 << "\t" << menu[4].menulist << setw(18) << "$" << setprecision(2) << fixed << menu[4].price << endl;
	cout << setw(5) << 5 << "\t" << menu[5].menulist << setw(18) << "$" << setprecision(2) << fixed << menu[5].price << endl;
	cout << setw(5) << 6 << "\t" << menu[6].menulist << setw(24) << "$" << setprecision(2) << fixed << menu[6].price << endl;
	cout << setw(5) << 7 << "\t" << menu[7].menulist << setw(24) << "$" << setprecision(2) << fixed << menu[7].price << endl;
	cout << setw(5) << 8 << "\t" << menu[8].menulist << setw(27) << "$" << setprecision(2) << fixed << menu[8].price << endl;
	cout << endl;
	cout << "===============================================" << endl;
}

//Input Menu Selection
void selectItems()
{
	int ch, quantity;
	char con;
	do {
		cout << "Please enter your selection number: ";
		cin >> ch;
		cout << "Please enter the quantity: ";
		cin >> quantity;
		switch (ch)
		{
		case 1:
		{
			c[1] = c[1] + quantity;
			cout << endl;
			cout << "(" << quantity << ") " << menu[1].menulist << " was added to the order." << endl;

			break;
		}
		case 2:
		{
			c[2] = c[2] + quantity;
			cout << endl;
			cout << "(" << quantity << ") " << menu[2].menulist << " was added to the order." << endl;

			break;
		}
		case 3:
		{
			c[3] = c[3] + quantity;
			cout << endl;
			cout << "(" << quantity << ") " << menu[3].menulist << " was added to the order." << endl;

			break;
		}
		case 4:
		{
			c[4] = c[4] + quantity;
			cout << endl;
			cout << "(" << quantity << ") " << menu[4].menulist << " was added to the order." << endl;

			break;
		}
		case 5:
		{
			c[5] = c[5] + quantity;
			cout << endl;
			cout << "(" << quantity << ") " << menu[5].menulist << " was added to the order." << endl;

			break;
		}
		case 6:
		{
			c[6] = c[6] + quantity;
			cout << endl;
			cout << "(" << quantity << ") " << menu[6].menulist << " was added to the order." << endl;

			break;
		}
		case 7:
		{
			c[7] = c[7] + quantity;
			cout << endl;
			cout << "(" << quantity << ") " << menu[7].menulist << " was added to the order." << endl;

			break;
		}
		case 8:
		{
			c[8] = c[8] + quantity;
			cout << endl;
			cout << "(" << quantity << ") " << menu[8].menulist << " was added to the order." << endl;

			break;
		}
		default:
			cout << "Invalid Input" << endl;
		}
		cout << "Would you like to add anything else? (y/n) ";
		cin >> con;

	} while (con != 'n');
	cout << endl;
}

//Print Bill
void printCheck()
{
	double total = 0, tax, due;
	cout << "===============================================" << endl;
	cout << right << setw(30) << "ELECTRONIC BILL" << endl;
	cout << "===============================================" << endl;
	cout << setw(6) << "Item"; 
	cout << right << setw(12) << "Qty";
	cout << right << setw(20) << "Amount" << endl;
	cout << endl;

	for (int i = 1; i < 9; i++)
	{
		if (c[i] > 0)
		{
			cout << left << setw(2) << menu[i].menulist << "\t\t" << c[i] << "\t\t" << " $" << setprecision(2) << fixed << menu[i].price << endl;
			total = total + (menu[i].price * c[i]);
		}
	}

	//Subtotal and Total Tax Included
	tax = total * 0.05;
	due = total + tax;
	cout << "_______________________________________________" << endl;
	cout << right << setw(30) << "Subtotal " << "\t" << right << " $" << setprecision(2) << fixed << total << endl;
	cout << right << setw(30) << "Tax " << "\t" << right << " $" << setprecision(2) << fixed << tax << endl;
	cout << right << setw(30) << "Balance Due " << "\t" << right << setprecision(2) << fixed << " $" << due << endl;
	cout << endl;
	cout << right << setw(26) << "*******************THANK YOU*******************" << endl;
}
