#include "Director.h"
#include <iostream>
using namespace std;

void Director::ApproveLoan(Loan* loan) {
	if (loan->getAmount() <= 200000) {
		cout << "Loan amount of " << loan->getAmount() << " was approved by Director" << endl;
	}
	else
		nextLoanApproveer->ApproveLoan(loan);
}
