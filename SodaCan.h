#ifndef SODACAN_H
#define SODACAN_H
#include <iostream>
#include <string>
using namespace std;

class SodaCan{
	private:
		string myBrand;
		int mySize;
		int myContents;
	public:
		SodaCan() // default constructor
		{
			myBrand = "";
			mySize = 0;
			myContents = 0;
		}
		SodaCan(string brand, int size, int contents) // overloading constructor
		{
			myBrand = brand;
			mySize = size;
			myContents = contents;
		}
		bool isEmpty() // check if drink is empty
		{
			if(myContents == 0)
			{
				return false;
			} else {
				return true;
			}
		}
		void pourInSoda(int amount) // pour the soda
		{
			myContents = amount;
		}
		void drink(int amount) // decrease the amount of soda by drinking
		{
			myContents -= amount;
		}
		void setSize(int size) // set the size of the soda
		{
			mySize = size;
		}
		int getSize() // get the size of the soda
		{
			return mySize;
		}
		string getBrand() // get the brand of the soda
		{
			return myBrand;
		}
		void setBrand(string brand) // set the brand
		{
			myBrand = brand;
		}
		int getContents() // get the contents of the soda
		{
			return myContents;
		}
		void checkBrand(char sodaBrandA[], char sodaBrandB[]) // check the soda A and B if they have the same brand
		{
			if(sodaBrandA == sodaBrandB)
			{
				cout << "You have the same soda brand! How many do you want to add? \n";
			} else {
				cout << "You don't have the same soda brand! Buy the same soda brand first! \n";
			}
		}
		int combineContents(int contentSodaA, int contentSodaB) // adds the content of the same soda brand
		{
			int totalContents;
			totalContents = contentSodaA + contentSodaB;
			
			return totalContents;
		}
		int removeContents(int contentSodaA, int contentSodaB) // removes the content of the same soda brand
		{
			int totalContents;
			contentSodaA >= contentSodaB; // one of the soda has to be greater than the other soda
			totalContents = contentSodaA - contentSodaB;
			
			return totalContents;
			
		}
};

#endif
