#pragma once
#include "clsDate.h";
class clsInputValidate
{

public:

  	static bool IsNumberBetween(int Number, int From, int To) {
		if (Number >= From && Number <= To) 
			return true;
		else
			return false;
	}

	static bool IsNumberBetween(double Number, double From, double To) {
		if (Number >= From && Number <= To) 
			return true;
		else
			return false;
	}

	static bool IsNumberBetween(float Number, float From, float To) {
		if (Number >= From && Number <= To) 
			return true;
		else
			return false;
	}

	static bool IsDateBetween(clsDate Date, clsDate DateFrom, clsDate DateTo) {

		if (!clsDate::IsDate1BeforeDate2(DateFrom, DateTo)) {
			clsDate::Swap(DateFrom, DateTo);
		}
		
		if ((clsDate::IsDate1AfterDate2(Date, DateFrom) || clsDate::IsDate1EqualDate2(Date, DateFrom)) && (clsDate::IsDate1BeforeDate2(Date, DateTo) || clsDate::IsDate1EqualDate2(Date, DateFrom))) {

			return true;
		}
		return false;

	}

	static int ReadIntNumber(string ErrorMessage) {
		int Number;

		while (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << ErrorMessage;
		}

		return Number;
	}

	static int ReadDblNumber(string ErrorMessage) {
		double Number;

		while (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << ErrorMessage;
		}

		return Number;
	}

	static int ReadIntBetween (int From, int To, string ErrorMessage) {

		int Number;
		Number = ReadIntNumber(ErrorMessage);

		while (!IsNumberBetween(Number,From,To))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;

	}

	static int ReadDblBetween (double From, double To, string ErrorMessage) {

		double Number;
		Number = ReadIntNumber(ErrorMessage);

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;
			Number = ReadIntNumber(ErrorMessage);
		}
		return Number;

	}

	static bool IsValidDate(clsDate Date) {
		return clsDate::IsValid(Date);
	}

};

