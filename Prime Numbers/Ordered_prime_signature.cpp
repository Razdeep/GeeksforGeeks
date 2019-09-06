// https://practice.geeksforgeeks.org/problems/ordered-prime-signature/0

#include <iostream>
#include <vector>
#include <algorithm>
#define deb(x)	cerr << #x << " -> " << x << endl;
#define all(v) v.begin(), v.end()
#define pb push_back
#define MAX 1e6 + 4
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)	return false;
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
vector<int> primeSignature(int n)
{
	vector<int> res;
	for (int i = 1; i <= n; ++i)
	{
		int cnt = 0;
		while (isPrime(i) && (n % i == 0))
		{
			n /= i;
			cnt++;
		}
		if (cnt)
			res.pb(cnt);
	}
	sort(all(res));
	return res;
}
int countDivisors(int n)
{
	int res = 0;
	for (int i = 1; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			if (i * i == n)
				res++;
			else
				res += 2;
		}
	}
	return res;
}
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		for (int this_sig: primeSignature(n))
			cout << this_sig << " ";
		cout << endl;
		cout << countDivisors(n) << endl;
	}
	return 0;
}
