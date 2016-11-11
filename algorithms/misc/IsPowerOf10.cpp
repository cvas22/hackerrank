#include <iostream>
using namespace std;

bool isPowerOf10 (int N) 
{
	while(N > 9 && N%10 == 0)
		N /= 10;
	return N == 1;
}
int main()
{
	int N;
	cout <<"Enter the the number you want to check :";
	cin >> N;
	cout << isPowerOf10(N);
	return 0;
}
