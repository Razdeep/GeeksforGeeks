// https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

/**
 * NOTE: The driver code is not provided here
 */

stack<int> deleteMid(stack<int> s, int sizeOfStack, int current) {
  // Your code here
  if (sizeOfStack == 1)
    return s;
  int mid = (sizeOfStack & 1 ? sizeOfStack / 2 + 1 : sizeOfStack / 2);
  if (int(s.size()) == mid) {
    s.pop();
    return s;
  }
  int saved = s.top();
  s.pop();
  int dont_care = 123456;
  s = deleteMid(s, sizeOfStack, dont_care);
  s.push(saved);
  return s;
}
