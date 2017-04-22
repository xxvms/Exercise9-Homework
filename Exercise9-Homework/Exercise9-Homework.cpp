// Exercise9-Homework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct time
{
	unsigned short hours;
	unsigned short minutes;
	unsigned short seconds;

};

int main()
{
	time time1;
	time1.hours = 24;
	time1.minutes = 61;
	time1.seconds = 61;

	std::cout << "Please provide time" << std::endl;
	std::cout << "Hours: ";
	
	while (time1.hours <= 23 || time1.hours >= 0)
	{
		std::cin >> time1.hours;

		if (time1.hours >= 24 || time1.hours <= 0)
		{
			std::cout << time1.hours << std::endl;
			std::cout << "I am sorry you have provided wrong hours" << std::endl;
			std::cout << "Please type value in range 0 - 23" << std::endl;
			std::cout << "Hours: ";
		}
		else
		{
			std::cout << "Thank you" << std::endl;
			break;
		}
		
	}

	std::cout << "Minutes: ";
	while (time1.minutes <= 60 || time1.minutes >= 0)
	{
		std::cin >> time1.minutes;

		if (time1.minutes >= 60 || time1.minutes < 0)
		{
			std::cout << "I am sorry you have provided wrong Minutes" << std::endl;
			std::cout << "Please type value in range  0 - 59" << std::endl;
			std::cout << "Minutes: ";
		}
		else
		{
			std::cout << "Thank you" << std::endl;
			break;
		}

	}

	std::cout << "Seconds: ";
	while (time1.seconds <= 60 || time1.seconds >= 0)
	{
		std::cin >> time1.seconds;

		if (time1.seconds >= 60 || time1.seconds < 0)
		{
			std::cout << "I am sorry you have provided wrong Minutes" << std::endl;
			std::cout << "Please type value in range  0 - 59 " << std::endl;
			std::cout << "Seconds: ";
		}
		else
		{
			std::cout << "Thank you" << std::endl;
			break;
		}

	}

	std::system("cls");
	std::cout << "Time: " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << std::endl;
	std::cout << std::endl;
	std::cout << "In seconds: " << std::endl;
	std::cout << "Hours: " << time1.hours * 3600 << " Minutes: " << time1.minutes * 60 << " Seconds: " << time1.seconds << std::endl;
	std::wcout << "Total: " << (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds << std::endl;
	system("pause");
    return 0;
}

