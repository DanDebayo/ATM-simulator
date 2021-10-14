# include <iostream>

using std::cin;
using std::endl;
using std::cout;

int transaction;
int deposit;
int Withdraw;
float balance;
int option;

void withdraw() {
	cout << " How much would you like to withdraw" << endl;
	cin >> Withdraw;
	if (Withdraw > balance) {
		cout << " Sorry you unfortuneately do not have enough in your balance to withdraw this ammount" << endl;
		cout << "Do you want to make another transaction?" << endl;
			cout << "Press 1 to continue or 2 to exit" << endl;
		
		cin >> transaction;
		if (transaction == 1)
			return;
	}
	else {
		cout << " Your withdrawal was successful" << endl;
		balance = balance - Withdraw;
		cout << " Your current balance is $" <<balance <<  endl;
		cout << "Do you want to make another transaction?" << endl;
		cout << "Press 1 to continue or 2 to exit" << endl;

		cin >> transaction;
		if (transaction == 1)
			return;

	}
}

void Deposit() {
	cout << " How much would you like to Deposit" << endl;
	cin >> deposit;

		cout << " Thank you for your Deposit" << endl;
          balance = balance + deposit;
        cout << " Your current balance is $" << balance << endl;

		cout << "Do you want to make another transaction?" << endl;
		cout << "Press 1 to continue or 2 to exit" << endl;

		cin >> transaction;
		if (transaction == 1)
			return;
}

void Balance() {
	cout << " Your current balance is $" << balance << endl;

	cout << "Do you want to make another transaction?" << endl;

	cout << "Press 1 to continue or 2 to exit" << endl;

	cin >> transaction;
	if (transaction == 1)
		return;
	
}

int main() {
	
	cout << "Welcom to ATM simulator" << endl;
	do {
		cout << "PLease enter an option:" << endl;
		cout << "1. Withdraw" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Balance" << endl;

		cin >> option;

		if (option == 1) {
			withdraw();

		}
		else if (option == 2) {
			Deposit();
		}
		else if (option == 3) {
			Balance();
		}
		else {
			cout << "Wrong input. Please try again" << endl;
			transaction = 1;
		}
	} while (transaction == 1);

	cout << " Thank you (: " << endl;
}
