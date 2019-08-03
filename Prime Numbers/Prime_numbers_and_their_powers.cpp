/**
 * https://practice.geeksforgeeks.org/problems/prime-factors-and-their-powers/0
 *
 */
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
vector<int> getPrimeFactors(int n)
{
	vector<int> res;
	for (int i = 2; n && i <= n; ++i)
		while (n % i == 0)
		{
			n /= i;
			res.push_back(i);
		}
	return res;
}
vector<int> formatAnswer(vector<int>& prime_factors)
{
	vector<int> res;
	sort(all(prime_factors));
	int prev = -1e7;
	int occurence = 1;
	for (int i = 0; i < (int) prime_factors.size(); ++i)
	{
		if (prime_factors[i] == prev)
		{
			res[res.size() - 1]++;
		}
		else {
			occurence = 1;
			res.push_back(prime_factors[i]);
			res.push_back(occurence);
			prev = prime_factors[i];
		}
	}
	return res;
}
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int n;
		cin >> n;
		vector<int> prime_factors = getPrimeFactors(n);
		vector<int> res = formatAnswer(prime_factors);
		for (int this_factor : res)
			cout << this_factor << " ";
		cout << endl;
	}
	return 0;
}
