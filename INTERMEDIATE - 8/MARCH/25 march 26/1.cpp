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
// node insert(node *&head)
// {
//     node *temp = new node(0);
//     temp->next = head;
//     head = temp;
// }
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

// void insertend(node *&head)
// {
//     node *temp = new node(4);
//     node *remp = head;
//     while (remp->next != NULL)
//     {
//         remp = remp->next;
//     }
//     remp->next = temp;
// }

// void deletefront(node *&head)
// {
//     node *temp = head;
//     head = head->next;
//     delete (temp);
// }

// void deleteend(node *&head)
// {
//     node *fast = head;
//     node *slow = head;

//     while (fast->next != NULL)
//     {
//         slow = fast;
//         fast = fast->next;
//     }
//     slow->next = NULL;
//     delete (fast);
// }

void lengthll(node *head)
{
    node *temp = head;
    int count = 0;

    while (temp!= NULL)
    {
        count++;
        temp=temp->next;
    }
    cout <<"length is "<< count;
}

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    // insert(head);
    // insertend(head);
    // deletefront(head);
    // deleteend(head);ṇ
    print(head);
    lengthll(head);

    return 0;
}