// https://practice.geeksforgeeks.org/problems/sort-a-stack/1
void SortedStack :: sort()
{
   //Your code here
   vector<int> arr;
   while(int(this->s.size()))
   {
       arr.push_back(this->s.top());
       this->s.pop();
   }
   std::sort(arr.begin(), arr.end());
   for (int i = 0; i < int(arr.size()); ++i)
            this->s.push(arr[i]);
}
