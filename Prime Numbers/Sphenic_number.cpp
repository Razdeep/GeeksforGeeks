#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n)
{
	if(n <= 1)	return false;
	for (int i = 2; i * i <= n; ++i)
		if(n % i == 0)
			return false;
	return true;
}
bool isSphenic(int n)
{
	if (n <= 1)	return false;
	int cnt = 0;
	int num = n;
	for (int i = 2; i * i <= num; ++i)
	{
		if (isPrime(i) && (n % i == 0))
		{
			n /= i;
			cnt++;
		}
	}
	if (n == 1 && cnt == 3)	
		return true;
	else 	return false;
}
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		cout << isSphenic(n) << endl;
	}
	return 0;
}
