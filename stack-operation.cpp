/*
题目描述

用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
 */
class Solution
{
public:
    void push(int node) //数据入队列直接压入stack1
    {
        stack1.push(node);
    }
    int pop()           //如果stack2非空，弹出栈顶元素即为出对列；若stack2为空，将stack1元素弹出，压入stack2，然后再弹出stack2栈顶元素即可
    {
        int a ;
        if(stack2.empty())
        {
            while(!stack1.empty())
            {
                a=stack1.top();
                stack2.push(a);
                stack1.pop();
            }
        }
        a=stack2.top();
        stack2.pop();
        return a;
    }
private:
    stack<int> stack1;
    stack<int> stack2;
};