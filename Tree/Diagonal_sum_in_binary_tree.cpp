// https://practice.geeksforgeeks.org/problems/diagonal-sum-in-binary-tree/1

/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/
void diagonalSumUtility(struct Node* root, int idx, map<int, int>& sumList)
{
    if (root)
    {
        diagonalSumUtility(root->right, idx, sumList);
        sumList[idx] += root->data;
        diagonalSumUtility(root->left, idx + 1, sumList);
    }
}
void diagonalSum(Node* root)
{
    map<int, int> sumList;
    diagonalSumUtility(root, 0, sumList);
    for (auto i : sumList)
        cout << i.second << " ";
    cout << endl;
}
