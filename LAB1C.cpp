// ---------------------------------------------------------------
// Programming Assignment:	LAB1C
// Developer:			Ezeniel Rios
// Date Written:			3/5/2021
// Purpose:	Calculate Box Office revenue earned from ticket sales 			
// ---------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	cout << "Box Office Program\n";

	double totalAdult, totalChild, grossProfit, netProfit, ditributorAmt, adultTkts, childTkts;
	cout << "Please enter number of child tickets: ";
	cin >> childTkts;
	cout << "Please enter the number of adult tickets: ";
	cin >> adultTkts;

	totalChild = 6 * childTkts;
	totalAdult = 10 * adultTkts;

	grossProfit = totalAdult + totalAdult;
	netProfit = grossProfit * 0.2;
	ditributorAmt = grossProfit - netProfit;

	cout << fixed << setprecision(2); // formats number to the hundredth decimal place
	cout << "\nGross Box Office Profit: \t$" << setw(8) << grossProfit << endl; //setw(8) applied to each total for better uniformity
	cout << "Net Box Office Profit: \t$" << netProfit << endl;
	cout << "Amount Paid to Distributor: \t$" << setw(8) << ditributorAmt << endl;

	system("pause");
}
