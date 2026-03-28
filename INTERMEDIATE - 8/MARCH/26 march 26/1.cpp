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

void lengthll(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "length is " << count << endl;
}

void insert(Node *&head)
{
    Node *temp = new Node(6);
    temp->next = head;
    head = temp;
}

void printt(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void insertend(Node *&head)
{
    Node *temp = new Node(4);
    Node *remp = head;
    while (remp->next != NULL)
    {
        remp = remp->next;
    }
    remp->next = temp;
}

void insertposition(Node *&head, int posi, int val)
{
    Node *NewNode = new Node(val);

    Node *Temp1 = head;
    Node *Temp2 = head;

    int i = 0;
    while (i < 3)
    {
        Temp2 = Temp1;
        Temp1 = Temp1->next;
        i++;
    }
    Temp2->next = NewNode;
    NewNode->next = Temp1;
}

void deleteposition(Node *&head, int posi )
{

    Node *Temp1 = head;
    Node *Temp2 = head;

    int i = 1;
    while (i < posi)
    {
        Temp2 = Temp1;
        Temp1 = Temp1->next;
        i++;
    }
    Temp2->next = Temp1->next;
    delete Temp1;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    lengthll(head);
    insert(head);
    insertend(head);
    // printt(head);

    // insertposition(head, 2, 100);
    // printt(head);

    // insertposition(head, 3, 500);
    // printt(head);

    deleteposition(head, 3);
    printt(head);

    return 0;
};