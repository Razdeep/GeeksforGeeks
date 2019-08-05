/**
 * Shortest path from 1 to n
 *
 * https://practice.geeksforgeeks.org/problems/shortest-path-from-1-to-n/0
 *
 * Explanation:
 * We are told to minimize the number of vertices from 1 to n
 * and for connected paths the options we have is either 3*i or i+1
 * Thus we would prefer using 3*i as long as we can, then after using all 3*i
 * we would downgrade to (i+1)
 *
 * For simplicity, let us consider (3*i) as long jump and (i+1) as short jump
 *
 */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int n;
		cin >> n;
		int no_of_high
	}
	return 0;
}
