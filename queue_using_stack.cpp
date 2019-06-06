void StackQueue :: push(int x)
 {
   s1.push(x);
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(s1.empty()&& s2.empty()){
        return -1;
    }
    else if (s2.empty() ){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int x=s2.top();
        s2.pop();
        return x;
    }
    else{
        int y=s2.top();
        s2.pop();
        return y;
    }
}
