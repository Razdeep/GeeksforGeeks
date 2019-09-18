// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

#include <iostream>
#include <map>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int x)
	{
		data = x; 
		left = right = NULL;
	}
};


// ---------- CODE STARTS HERE ------------------
int height(Node* node)
{
	if (node == NULL)
		return 0;
	return 1 + max(height(node->left), height(node->right));
}
// ---------- CODE ENDS HERE -------------------


void inOrder(Node *root)
{
	if (root)
	{
		inOrder(root->left);
		cout << (root->data) << " ";
		inOrder(root->right);
	}
}
// @TODO Fix Driver Code
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int no_of_edges;
		cin >> no_of_edges;
		struct Node* root = NULL;
		for (int i = 0; i < no_of_edges; ++i)
		{
			int node1, node2;
			char lr;
			cin >> node1 >> node2 >> lr;
			map<int, struct Node*> nodeFinder;
			struct Node* temp = new Node(node2);
			if (nodeFinder.find(node1) == nodeFinder.end())
			{
				root = new Node(node1);
				if (lr == 'L')
					root->left = temp;
				else
					root->right = temp;
				nodeFinder[node1] = root;
				nodeFinder[node2] = temp;
			}
			else
			{
				struct Node *parent = (*nodeFinder.find(node1)).second;
				if (lr == 'L')
					root->left = temp;
				else
					root->right = temp;
				nodeFinder[node2] = temp;
			}
		}
		cout << height(root) << endl;
	}
	return 0;
}
