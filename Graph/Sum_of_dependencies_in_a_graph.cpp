/*
 * Sum of Dependencies in a graph
 *
 * https://practice.geeksforgeeks.org/problems/sum-of-dependencies-in-a-graph/0
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
		int no_of_vertices, no_of_edges;
		cin >> no_of_vertices >> no_of_edges;
		int u, v;
		vector<vector<int>> graph(no_of_vertices, vector<int>());
		for (int i = 0; i < no_of_edges; ++i)
		{
			cin >> u >> v;
			graph[u].push_back(v);
		}

		// Main calculation
		int sum_of_dependencies = 0;
		for (int i = 0; i < no_of_vertices; ++i)
		{
			sum_of_dependencies += graph[i].size();
		}
		cout << sum_of_dependencies << endl;
	}
	return 0;
}
