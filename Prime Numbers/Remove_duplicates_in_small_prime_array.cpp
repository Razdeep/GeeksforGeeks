// https://practice.geeksforgeeks.org/problems/remove-duplicates-in-small-prime-array/1
{
#include<bits/stdc++.h>
using namespace std;
void removeDuplicate(vector<int> &vect);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            A.push_back(k);
        }
        removeDuplicate(A);
        for(int i =0;i<A.size();i++)
            cout<<A[i]<<" ";
        cout<<endl;
    }
}

}
/*This is a function problem.You only need to complete the function given below*/
/*you need to complete this function*/
void removeDuplicate(vector<int> &vect)
{
//Your code here
    vector<int> res;
    set<int> myset;
    for (int i = 0; i < int(vect.size()); ++i)
        if (myset.find(vect[i]) == myset.end())
        {
            res.push_back(vect[i]);
            myset.insert(vect[i]);
        }
    vect = res;
}
