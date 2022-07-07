#include <stack>
#include <iostream>

using namespace std;

class getMinStack
{
private:
    stack<int> dataStack;
    stack<int> minStack;
public:
    getMinStack(/* args */);
    ~getMinStack();

    void pop();
    void push(int num);
    int getMin();
};


getMinStack::getMinStack()
{

}

getMinStack::~getMinStack()
{

}

void getMinStack::pop()
{
    dataStack.pop();
    minStack.pop();
}


void getMinStack::push(int num)
{
    dataStack.push(num);

    if (!minStack.empty())
    {
        if (num < minStack.top())
        {
            minStack.push(num);
        }
        else
        {
            minStack.push(minStack.top());
        }
    }
    else
    {
        minStack.push(num);
    }
}

int getMinStack::getMin()
{
    if (!minStack.empty())
    {
        return minStack.top();
    }
    else
        return -1;
}

int main()
{
    getMinStack minStack;

    minStack.push(3);
    minStack.push(2);
    minStack.push(3);
    minStack.push(4);
    minStack.push(1);

    minStack.pop();

    cout << "min Num:" << minStack.getMin() << endl;
}