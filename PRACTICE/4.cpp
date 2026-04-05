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

void insertfront(node *&head)
{
    node *newnode = new node(10);
    newnode->next = head;
    head = newnode;
}
void deletefront(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}

void insertlast(node *&head)
{
    node *newnode = new node(20);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void deletelast(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast->next != NULL)
    {
        slow = fast;
        fast = fast->next;
    }
    slow->next = NULL;
    delete fast;
}

void printlength(node *&head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "Length of LL is: " << count;
}

void printdata(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    printdata(head);
    insertfront(head);
    printdata(head);
    deletefront(head);
    printdata(head);
    insertlast(head);
    printdata(head);
    deletelast(head);
    printdata(head);
    printlength(head);
}