#pragma once
#include <String>
#include <vector>
#include "Cars.h"

using namespace std;

class Clients
{
	private:

		string mFName;
		string mSName;
		string mGender;
		int mDate;
		int mMoney;
		vector<Cars> mCars;


	public:

		Clients();
		//Clients(std::string FName, std::string SName, std::string Gender, int Date, int Money, std::vector Cars);

		~Clients();


};

