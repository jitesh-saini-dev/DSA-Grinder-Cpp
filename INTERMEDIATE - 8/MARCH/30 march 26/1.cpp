#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void printt(node *head)
{
    node*temp=head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void deletemidd(node *head, int posi)
{
    node *slow = head;
    node *fast = head;
    while (posi > 0)
    {
        slow = fast;
        fast = fast->next;
        posi--;
    }
    slow->next = fast->next;
    delete fast;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);


    deletemidd(head, 1);
    printt(head);
}