#include<iostream>
#include<string>
using namespace std;
int main()
{
	string num ;
	string str = " ";
	int value , inum;
	int total = 0 ;
	int Max = 0 ;

	cout << ">> Program Find Maximum value <<"  << endl;
	cout << "Enter number of value(3-10) : ";
	cin >> value;
	cout << endl;

	if (value < 3) value = 3;
	else if (value > 10) value = 10;
	
	for (int i = 1 ; i <= value ; i++)
	{
		cout << "Enter value number #" << i << " : " ;
		cin >> num ;										// Input num(string)
		if (str == " ") str = num ;							// Take the num(string) to str 
		else str +=  " , " + num ;	

		inum = atoi(num.c_str());							// Convert num(string) to num(Integer)
		if (inum > Max) Max = inum;
		total += inum ;	
	}
	cout << "Exit Program.";
	cout << "You enter number : " << str << endl;
	cout << "Maximum value number : " << Max << endl;
	cout << "Total of number is : " << total << endl << endl;

	return(0);
}