/********************************************************************************************
*	FILE NAME:StringCounter.cpp                                                             *                                                                   *
*	Description:This file is the part of DLL apllication which consist of the operations    *
*   which will be performed using this dll application                                      *
*	Author:Saurabh S Dange                                                                  *
*********************************************************************************************/

//Headers
#include "stdafx.h"
#include "StringCounter.h"//This is not a system defined header it is part of dll application
#include <iostream>
#include<string.h>


#define STRINCOUNTER_EXPORTS //To link StringCounter.h with this file

namespace STRINGCOUNTER
{
	int Functions::count(char str[50])
	{

		int n;
		n = (int)strlen(str);//strlen returns the length of the string which is passed as argument
		return n;

	}



}