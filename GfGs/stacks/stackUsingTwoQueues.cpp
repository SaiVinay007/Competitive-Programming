
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
        
}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code
        if(q1.empty()) return -1;
        
        int size=q1.size();
        for(int i=0;i<size-1;i++)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ret=q1.front();
        q1.pop();
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        return ret;
                
            
}