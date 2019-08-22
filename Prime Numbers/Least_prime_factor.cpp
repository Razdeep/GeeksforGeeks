#include <iostream>
#include <vector>

using namespace std;
const int MAX = 1e3;
vector<bool> isprime;

int main()
{
	isprime.resize(MAX, true);
	int testcase;
	cin >> testcase;
	// Precomputing sieve
	isprime[0] = isprime[1] = false;
	for (int i = 2; i * i <= MAX; ++i)
	{
		if (isprime[i])
		{
			for (int j = i * i; j < MAX; j += i)
			{
				isprime[j] = false;
			}
		}
	}
	while(testcase--)
	{
		int n;
		cin >> n;
		cout << 1 << " ";
		for (int i = 2; i <= n; ++i)
		{
			for (int j = 2; j <= n; ++j)
				if (isprime[j] && i % j == 0)
				{
					cout << j << " ";
					break;
				}
		}
		cout << endl;
	}
	return 0;
}
