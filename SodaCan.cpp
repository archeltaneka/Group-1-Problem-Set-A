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
			cout << "4. Quit \n";
			cout << "Enter number 1-4 to continue: ";
			cin >> choice;
		
			if(choice == 1)
			{
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
			
				cout << "You bought: " << can.getBrand() << endl;
				cout << "Amount: " << can.getContents() << " can(s)" << endl;
				cout << "Size: " << can.getSize() << endl;
				if(size == 1) cout << "Cup: Small \n";
				else if(size == 2) cout << "Cup: Medium \n";
				else if(size == 3) cout << "Cup: Large \n";
			} else if(choice == 4) {
				cout << "Thank you for coming! See you again! \n";
			} else {
				cout << "Please enter number from 1-4! \n";
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
