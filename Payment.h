#pragma once
#include<iostream>
using namespace std;

class Payment;

class Payment
{
	protected:
		int payID;
		char payType;
		double payAmount;
	
	public:
		void addPaymentDetails(int pId, char pType, double pAmount );
		void validatePayment();
		void displayPaymentDetail();
};
