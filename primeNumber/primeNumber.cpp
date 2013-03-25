/*
 * primeNumber.cpp
 *	check whether a number is prime or not.
 *  Created on: Mar 25, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{
	int n;
	cout << "Enter a positive number to check whether it is a prime number or a composite number:";
	cin >> n;
	if(n<=0)
		cout << "Oops! you entered either a negative number or zero";
	if(n==1)
		cout << "1 is neither a prime number nor a composite number";
	bool flag=true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			flag=false;

	}
	if(flag==true)
		cout << n << " is a prime number.";
	else
		cout << n << " is a composite number.";
	return 0;
}
