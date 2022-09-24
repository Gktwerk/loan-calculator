//ibm作业 利润计算器
#include <iostream>
using namespace std;
int main()
{
	double cap = 0.0, time = 0.0, rate = 0.0;
	cout << "It's a calculator to calculate your profits \n";
	cout << "Let's start,first please enter your capital principle \n";
	cin >> cap;
	while(cap <= 0)
	{
		cout << "Please enter right number!\n ";
		cin >> cap;
		cin.clear();
		cin.ignore();
	}
	cout << "Ok\n";
	cout << "Then enter the time you will deposit your money(year) \n";
	cin >> time;
	while(time <= 0)
	{
		cout << "Please enter right number!\n";
		cin >> time;
		cin.clear();
		cin.ignore();
	}
    cout << "Well,the last one.\n";
	cout << "Finally,enter the interest rates you expect(0<=rate<=1) \n";
	cin >> rate;
	while (rate <= 0 || rate >= 1)
	{
		cout << "Please enter right number!\n";
		cin >> rate;
		cin.clear();
		cin.ignore();
	}
	double trate=rate+1
	double itst = cap * t
	cout << "Your profit will be " << itst << endl;
	if (itst >= 50)
		cout << "You are so rich,v me 50 plz.\n";
	else  cout<<"Not bad,at least you do gain some money.\n";
	return 0;
 
}