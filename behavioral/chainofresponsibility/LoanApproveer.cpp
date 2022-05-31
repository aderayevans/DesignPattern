#include "LoanApproveer.h"

void LoanApproveer::setNextApprover(LoanApproveer* nextLoanApproveer) {
	this->nextLoanApproveer = nextLoanApproveer;
}
