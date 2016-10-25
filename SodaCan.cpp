#include <iostream>
#include <string>
#include "SodaCan.h"
using namespace std;

int main(){
	
	// declares variables for user input
	string brand;
	int size;
	int contents;
	int money;
	int choice;
	
	// creates SodaCan object
	SodaCan can;
	
	// get prompt from user
	cout << "\tWelcome to Baba Vending Machine!" << endl;
	cout << "Insert money(Rp. 500): ";
	cin >> money;
	if(money == 500)
	{
		while(true)
		{
			cout << "What do you want?? \n";
			cout << "1. Buy a soda \n";
			cout << "2. Add soda \n";
			cout << "3. Remove soda \n";
			cout << "4. Drink soda \n";
			cout << "5. Quit \n";
			cout << "Enter number 1-5 to continue: ";
			cin >> choice;
		
			if(choice == 1)
			{
				// get prompt from the user
				cout << "Brand: ";
				cin >> brand;
				can.setBrand(brand);
				cout << "Amount: ";
				cin >> contents;
				can.pourInSoda(contents);
				cout << "Size: \n";
				cout << "1. Small \n";
				cout << "2, Medium \n";
				cout << "3. Large \n";
				cin >> size;
				can.setSize(size);
				
				// print output message
				cout << "You bought: " << can.getBrand() << endl;
				cout << "Amount: " << can.getContents() << " can(s)" << endl;
				cout << "Size: " << can.getSize() << endl;
				if(size == 1) cout << "Cup: Small \n";
				else if(size == 2) cout << "Cup: Medium \n";
				else if(size == 3) cout << "Cup: Large \n";
				
			} else if(choice == 2) {
				// declares variables
				char sodaBrandA[100];
				char sodaBrandB[100];
				int sodaAmountA;
				int sodaAmountB;
				
				// get prompt from user for 2 soda brand name
				cout << "Enter the first soda brand: ";
				cin >> sodaBrandA;
				cout << "Enter the second soda brand: ";
				cin >> sodaBrandB;
				can.checkBrand(sodaBrandA, sodaBrandB);
				
				cout << "Enter for the first amount of soda: ";
				cin >> sodaAmountA;
				cout << "Enter for the second amount of soda: ";
				cin >> sodaAmountB;
				// substract the amount of soda
				can.combineContents(sodaAmountA, sodaAmountB);
				cout << "Now, you have: " << can.combineContents(sodaAmountA, sodaAmountB) << "mL of " << sodaBrandA << endl;
				
			} else if(choice == 3) {
				// declares variables
				char sodaBrandA[100];
				char sodaBrandB[100];
				int sodaAmountA;
				int sodaAmountB;
				
				// get prompt from user for 2 soda brand name
				cout << "Enter the first soda brand: ";
				cin >> sodaBrandA;
				cout << "Enter the second soda brand: ";
				cin >> sodaBrandB;
				can.checkBrand(sodaBrandA, sodaBrandB);
				
				cout << "Enter for the first amount of soda: ";
				cin >> sodaAmountA;
				cout << "Enter for the second amount of soda: ";
				cin >> sodaAmountB;
				// substract the amount of soda
				can.removeContents(sodaAmountA, sodaAmountB);
				cout << "Now, you have: " << can.removeContents(sodaAmountA, sodaAmountB) << "mL of " << sodaBrandA << endl;
				
			} else if(choice == 4)
			{
				// get prompt from the user
				int amount;
				
				cout << "How many do you want to drink? ";
				cin >> amount;
				can.drink(amount);
				
			} else if(choice == 5)
			{
				cout << "Thank you for buying! See you again! \n";
			} else {
				cout << "Please enter number from 1-5! \n";
			}
		}
	} else if(money >= 500)
	{
		cout << "Amount of money is too big!";
	} else {
		cout << "Amount of money is too small!";
	}
	
	return 0;
	
}
