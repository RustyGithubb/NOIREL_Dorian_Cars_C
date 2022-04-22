#pragma once
#include <String>

using namespace std;

class Cars

	
{
private:

	string mBrand;
	string mModel;
	string mPlate;

	int mYearsOld;
	int mMilienage;
	int mCost;

public:

	Cars();
	Cars(std::string Brand, std::string Model, std::string Plate, int Color, int YearsOld, int Milienage, int Cost);

	~Cars();



};

