// Modified Zigma.cpp : Print sum of numbers by factor 3.
//

#include "stdafx.h"
#include <iostream>

int Numberinput;
int Result;

int main()
{	
	std::cout << "Give me a Number:";
	std::cin >> Numberinput;
		for (int i=1; i<=Numberinput; i++)
		{
			Result += i;
			std::cout << "Sum of 1 to " << Numberinput << " is: " << Result << "\n" << ;
		}
		

	return 0;
}

