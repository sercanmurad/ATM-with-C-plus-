#include<iostream>

using namespace std;

void showMenu()
{
	cout << "******MENU******" << endl;
	cout << "1.Show Money." << endl;
	cout << "2.Deposit." << endl;
	cout << "3.Widtraw." << endl;
	cout << "4.Exit." << endl;
	cout << "****************" << endl;
}
int main()
{
	int option;
	double balance = 500;

	do {
		showMenu();
		cout << "Please chose the option: " << endl;
		cin >> option;
		system("cls");
		//show money,deposit,widtraw,show menu
		switch (option)
		{
		case 1:cout << "Balance is: " << balance << "$" << endl; break;
		case 2:cout << "How much money you want to deposit: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3:cout << "Widtraw Amount: ";
			double widtrawAmount;
			cin >> widtrawAmount;
			if (widtrawAmount <= balance)
				balance -= widtrawAmount;
			else
				cout << "Is not enough money!!!";
			break;
		}
	} while (option != 4);
	system("Pause");
	return 0;
}