#ifndef SODACAN_H
#define SODACAN_H
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
		
};

#endif
