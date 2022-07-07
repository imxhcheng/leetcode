#include<iostream>
#include<stack>
#include<utility>

using namespace std;


class twoStackQueue 
{
public:

    twoStackQueue();
    ~twoStackQueue();

    void add(int num);

    void pop();
    int top();

private:
    stack<int> stackPush;
    stack<int> stackPop;

    void push2pop();

};


twoStackQueue::twoStackQueue()
{

}

twoStackQueue::~twoStackQueue()
{

}


void twoStackQueue::add(int num)
{
    stackPush.push(num);

    push2pop();
}

void twoStackQueue::pop()
{

    if (stackPop.empty() && stackPush.empty())
    {
        return;
    }
    


    push2pop();

    if (!stackPop.empty())
    {
        stackPop.pop();
    }
    
}


int twoStackQueue::top()
{

    if (stackPop.empty() && stackPush.empty())
    {
        return -1;
    }


    push2pop();


    if (!stackPop.empty())
    {
        return stackPop.top();
    }
    else 
    {
        return -1;    
    }
    
}


void twoStackQueue::push2pop()
{
    if (stackPop.empty())
    {
        while (!stackPush.empty())
        {
            stackPop.push(stackPush.top());
            stackPush.pop();
        }
    }
}

int main()
{
    twoStackQueue myque;


    myque.add(1);
    myque.add(2);
    myque.add(3);
    myque.add(4);
    myque.add(5);


    cout <<"myque.top:"<<myque.top()<< endl;
    myque.pop();


    myque.add(6);

    cout <<"myque.top:"<<myque.top()<< endl;
    myque.pop();
    cout <<"myque.top:"<<myque.top()<< endl;
    myque.pop();
    cout <<"myque.top:"<<myque.top()<< endl;
    myque.pop();
    cout <<"myque.top:"<<myque.top()<< endl;
    myque.pop();
    cout <<"myque.top:"<<myque.top()<< endl;

}