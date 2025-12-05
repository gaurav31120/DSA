#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        cout << head->data;

        while (head->next != NULL)
        {
            head = head->next;
            cout << " -> " << head->data;
        }
    }
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    printLL(head);

    return 0;
}