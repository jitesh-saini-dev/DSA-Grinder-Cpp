#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void insertposition(Node *&head, int posi, int val)
{
    Node *NewNode = new Node(val);

    Node *Slow = head;
    Node *Fast = head;

    int i = 0;
    while (i < posi)
    {
        Slow = Fast;
        Fast = Fast->next;
        i++;
    }
    Slow->next = NewNode;
    NewNode->next = Fast;
}

void deleteposition(Node *&head, int posi)
{
    Node *Slow = head;
    Node *Fast = head;

    int i = 1;
    while (i < posi)
    {
        Slow = Fast;
        Fast = Fast->next;
        i++;
    }
    Slow->next = Fast->next;
    delete Fast;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    insertposition(head, 2, 40);
    deleteposition(head, 3);
    printLL(head);

    return 0;
};