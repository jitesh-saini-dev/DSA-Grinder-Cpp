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

void printdata(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
        cout << "NULL";  // ✅ yeh add kiya

}

int main()
{

    Node *head = new Node(10);
    Node *second = new Node(20);
    head->next = second;

    printdata(head);

    return 0;
}