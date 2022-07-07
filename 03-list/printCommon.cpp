#include <iostream>

using namespace std;

class node
{
public:

    int num;
    node* next;

    node(int value)
    {
        num = value;
    }
};


/*初始化链表需要一个中间的临时变量链接*/
void initHead1(node* pHead)
{

    node* pTmp;
    pTmp = pHead;
    for (size_t i = 0; i < 10; i++)
    {
        node* pNode = new node(i);
        pNode->next = nullptr;

        pTmp->next = pNode;
        pTmp = pTmp->next;
    }
    
}

int main()
{

    node* pHead1;
    node* pHead2;


    while (pHead1 != nullptr && pHead2 != nullptr)
    {
        if (pHead1->num > pHead2->num)
        {
            pHead1 = pHead1->next;
        }
        else if(pHead1->num< pHead2->num)
        {
            pHead2 = pHead2->next;
        }
        else
        {
            printf("%d",pHead1->num);

            pHead1 = pHead1->next;
            pHead2 = pHead2->next;
        }   
    }
    
}