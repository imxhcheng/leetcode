#include <stack>
#include <iostream>

using namespace std;


stack<int> sortStack(stack<int> sNum)
{
    stack<int> sHelp;
    stack<int> src = sNum;

    while (!src.empty())
    {
        int cur = src.top();
        if (sHelp.empty())
        {
            sHelp.push(cur);
        }
        else
        {
            if (cur < sHelp.top())
            {
                sHelp.push(cur);
            }
            else 
            {
                while (!sHelp.empty() && sHelp.top() < cur)
                {
                    src.push(sHelp.top());
                    sHelp.pop();
                }          
            }
        }
    }

    return src;
}

int main() 
{
    stack<int> sNum;
    sNum.push(2);
    sNum.push(4);
    sNum.push(6);
    sNum.push(1);
    sNum.push(3);
    sNum.push(5);


    stack<int> sRst = sortStack(sNum);

    while (!sRst.empty())
    {
        cout <<"num:"<<sRst.top()<<endl;
        sRst.pop();
    }
    
}