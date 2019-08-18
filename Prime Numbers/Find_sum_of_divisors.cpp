// https://practice.geeksforgeeks.org/problems/find-sum-of-divisors/0
#include <iostream>
#include <vector>
using namespace std;
vector<int> findDivisors(int n)
{
	vector<int> res;
	for (int i = 1; i <= n; ++i)
		if (n % i == 0)
			res.push_back(i);
	return res;
}
int sumOfDivisors(int n)
{
	int res = 0;
	for (int i = 1; i <= n; ++i)
		if (n % i == 0)
			res += i;
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
		auto divisors = findDivisors(n);
		int ans = 0;
		for (int this_div: divisors)
			ans += sumOfDivisors(this_div);
		cout << ans << endl;
	}
	return 0;
}
