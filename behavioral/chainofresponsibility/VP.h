#pragma once
#include "LoanApproveer.h"
class VP :
	public LoanApproveer
{
public:
	void ApproveLoan(Loan* loan);
};

