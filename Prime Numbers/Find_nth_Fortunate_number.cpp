// https://practice.geeksforgeeks.org/problems/find-n-th-fortunate-number/0
#include <iostream>
#include <vector>
#define deb(x) cerr << #x << " -> " << x << endl;
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)	return false;
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	vector<int> primeList;
	primeList.push_back(-1); // to make index 1 based
	for (int i = 2; i < 100; ++i)
	{
		if (isPrime(i))
			primeList.push_back(i);
	}
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		int prod = 1;
		bool done = false;
		for (int i = 1; i <= n; ++i)
			prod *= primeList[i];
		for (int i = 1; i < int(primeList.size()); ++i)
		{
			if (isPrime(prod + primeList[i]))
			{
				cout << primeList[i] << endl;
				done = true;
				break;
			}
		}
		if (done)	continue;
	}
	return 0;
}
