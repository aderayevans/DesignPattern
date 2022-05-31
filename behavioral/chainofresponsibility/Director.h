#pragma once
#include "LoanApproveer.h"
class Director :
	public LoanApproveer
{
public:
	void ApproveLoan(Loan* loan);
};

