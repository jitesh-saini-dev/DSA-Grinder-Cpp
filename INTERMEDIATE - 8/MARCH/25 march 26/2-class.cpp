// LL Whole Code
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

int findLength(node *head)
{
    int cnt = 0;

    node *temp = head;

    while (temp != NULL)
    {
        cnt++;

        temp = temp->next;
    }

    return cnt;
}

void insertAtFront(node *&head, int val)
{
    node *temp = new node(val);
    temp->next = head;
    head = temp;
}

void printLL(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtEnd(node *&head, int val)
{
    node *newNode = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteAtFront(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(node *&head)
{
    node *temp1 = head;
    node *temp2 = head;

    while (temp1->next != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    temp2->next = NULL;
    delete temp1;
}

void insertAtGivenPos(node *&head, int pos, int val)
{
    node *newNode = new node(val);
    node *temp1 = head;
    node *temp2 = head;

    int i = 0;
    while (i < pos)
    {
        temp2 = temp1;
        temp1 = temp1->next;
        i++;
    }

    temp2->next = newNode;
    newNode->next = temp1;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    insertAtFront(head, 5);
    insertAtFront(head, 2);
    insertAtFront(head, 1);

    insertAtEnd(head, 60);

    printLL(head);

    int length = findLength(head);
    cout << length << endl;

    deleteAtFront(head);
    deleteAtFront(head);

    length = findLength(head);

    printLL(head);

    cout << length << endl;

    deleteAtEnd(head);

    printLL(head);

    insertAtGivenPos(head, 3, 1000);

    printLL(head);

    insertAtGivenPos(head, 4, 2000);

    printLL(head);

    return 0;
}