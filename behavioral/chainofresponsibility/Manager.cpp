#include "Manager.h"
#include <iostream>
using namespace std;
void Manager::ApproveLoan(Loan* loan) {
	if (loan->getAmount() <= 100000) {
		cout << "Loan amount of " << loan->getAmount() << " was approved by Manager" << endl;
	}
	else
		nextLoanApproveer->ApproveLoan(loan);
}
