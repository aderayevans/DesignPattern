#include "VP.h"
#include <iostream>
using namespace std;
void VP::ApproveLoan(Loan* loan) {
	cout << "Loan amount of " << loan->getAmount() << " was approved by VP" << endl;
}
