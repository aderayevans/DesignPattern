#pragma once
#include "LoanApproveer.h"
class Manager :	public LoanApproveer
{
public:
	void ApproveLoan(Loan* loan);
};

