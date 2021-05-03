/*
Thomas Wimer
Template
5/2/2021
Langley
CIS 1202.NR1
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>




using namespace std;



template<class I>
int Integer(int num)
{

	int answerInt;

	answerInt = num / 2;

	if (answerInt % 1)
	{
		ceil(answerInt);
	}
	else
	{
		floor(answerInt);
	}

	return answerInt;
}

template<class D>
double Double(double num)
{

	double answerDub;

	answerDub = num / 2;

	return answerDub;

}

template<class F>
float Float(float num)
{

	float answerFlo;

	answerFlo = num / 2;

	return answerFlo;

}

template<class Ans>
Ans half(Ans num)
{

	if (num == int)
	{
		Integer(num);
	}
	else if (num == double)
	{
		Double(num);
	}
	else if (num == float)
	{
		Float(num);
	}

}

int main()
{



	double a = 7.0;
	float b = 5.0f;
	int c = 3;


	cout << half(a) << endl;
	cout << half(b) << endl; 
	cout << half(c) << endl;








	cout << endl << endl;
	system("pause");
	return 0;
}