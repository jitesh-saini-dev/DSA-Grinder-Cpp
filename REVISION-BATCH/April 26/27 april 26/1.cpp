#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};

void traversal(ListNode *head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

void insertionathead(ListNode *&head)
{
    ListNode *newNode = new ListNode(100);
    newNode->next = head;
    head = newNode;
}

void insertionatend(ListNode *&head)
{
    ListNode *newNode = new ListNode(500);
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertionatposi(ListNode *&head, int posi)
{
    ListNode *newNode = new ListNode(1100);
    ListNode *temp = head;
    ListNode *prev = head;

    while (posi > 1)
    {
        // if (head == NULL)
        // {
        //     insertionatposi(head, );
        //     return;
        // }
        prev = temp;
        temp = temp->next;
        posi--;
    }
    prev->next = newNode;
    newNode->next = temp;
}
int main()
{
    ListNode *head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);

    // insertionathead(head);
    // insertionatend(head);
    // traversal(head);
    insertionatposi(head, 2);
    traversal(head);

    return 0;
}