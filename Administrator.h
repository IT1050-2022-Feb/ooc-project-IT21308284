#include<iostream>
#include"Payment.h"
using namespace std;

//classes
class Administrator;

//IT21308284 - Vithanage H.D -  MLB_11.01_03

class Administrator
{
	private:
		int adminNo;
		char adminName;
		double salesAmount;
	
	public:
		void setFinacialReport(double sales);		
};


