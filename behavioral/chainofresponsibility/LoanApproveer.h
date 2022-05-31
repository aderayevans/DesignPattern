#pragma once
#include "Loan.h"
class LoanApproveer
{
protected:
	LoanApproveer* nextLoanApproveer;
public:
	void setNextApprover(LoanApproveer* nextLoanApproveer);
	virtual void ApproveLoan(Loan* loan) = 0;

};

