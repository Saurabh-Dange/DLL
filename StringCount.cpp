
/********************************************************************************************
*	FILE NAME:StringCount.cpp                                                               *                                                                  
*	Description:Defines the entry point for the console application.                        *                                   
*	Author:Saurabh S Dange                                                                  *
*********************************************************************************************/

//Header Files
#include "stdafx.h"
#include<iostream>
#include "StringCounter.h"
#include <string>

using namespace std;

//Main function
int main()
{	
	//declaration of variable
	char str[50];
	
	//input of the string
	cin.getline(str,50);

	//output of the application
	cout << "Length of the string is:" <<
	STRINGCOUNTER::Functions::count(str) << "\n"; //This sends the value of string as a argument to the print function 
	
	return 0;
}

