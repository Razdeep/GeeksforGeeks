// https://practice.geeksforgeeks.org/problems/number-of-paths/0
/*
 * Note: Efficiency can be improved using dynamic programming
 *
**/
#include <iostream>
using namespace std;
int countPaths(int rows, int cols)
{
	if (rows == 1 || cols == 1)
		return 1;
	return countPaths(rows - 1, cols) + countPaths(rows, cols - 1);
}
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int rows, cols;
		cin >> rows >> cols;
		cout << countPaths(rows, cols) << endl; 
	}
	return 0;
}
