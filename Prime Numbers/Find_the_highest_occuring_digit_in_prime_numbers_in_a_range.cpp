// https://practice.geeksforgeeks.org/problems/find-the-highest-occurring-digit-in-prime-numbers-in-a-range/0
#include <iostream>
#include <vector>
#include <climits>
#define MAX 1e6 + 6
using namespace std;
int main()
{
	int t;
	cin >> t;
	vector<int> sieve(MAX, true);
	sieve[0] = sieve[1] = false;
	for (int i = 2; i * i <= MAX; ++i)
		if (sieve[i])
			for (int j = i * i; j < MAX; j += i)
				sieve[j] = false;
	while(t--)
	{
		int l, r;
		cin >> l >> r;
		int cnt_primes = 0;
		vector<int> freq(10, 0);
		for (int i = l; i <= r; ++i)
		{
			if(sieve[i])
			{
				cnt_primes++;
				int this_num = i;
				while(this_num)
				{
					freq[this_num % 10]++;
					this_num /= 10;
				}
			}
		}
		int max_occurence = INT_MIN;
		int max_occuring_digit;
		for (int i = 0; i < 10; ++i)
		{
			if (freq[i] >= max_occurence)
			{
				max_occurence = freq[i];
				max_occuring_digit = i;
			}
		}
		cout << (cnt_primes ? max_occuring_digit : -1) << endl;
	}
	return 0;
}
