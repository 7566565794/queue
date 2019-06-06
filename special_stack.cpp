void push(int a)
{
  s.push(a);
}
bool isFull(int n)
{
  if(s.size()==n)
    return 1;
  return 0;
}
bool isEmpty()
{
  if(s.empty())
    return 1;
  return 0;
}
int pop()
{
  s.pop();
}
int getMin()
{
      int min = s.top();
      s.pop();
      while(!s.empty()){
      if(min>s.top()){
      min = s.top();
      }
      s.pop();
      }
return min;

}
