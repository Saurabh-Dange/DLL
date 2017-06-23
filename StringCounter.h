/********************************************************************************************
*	FILE NAME:StringCounter.h                                                               *
*   FILE TYPE:Header File                                                                   *
*	Description:This file is the part of DLL apllication                                    *
*	Author:Saurabh S Dange                                                                  *
*********************************************************************************************/
#pragma once //It insures that this file is compiled only once

#ifdef STRINGCOUNTER_EXPORTS
#define STRINGCOUNTER_F __declspec(dllexport)
#else
#define STRINGCOUNTER_F __declspec(dllimport)
#endif

namespace STRINGCOUNTER
{
	class Functions
	{
	public:

		/*
		Function Declaration:
		Function Name:Count
		Link:This Function is linked with StringCounter.cpp program
		*/
		static STRINGCOUNTER_F int count(char str[50]);


	};
}
