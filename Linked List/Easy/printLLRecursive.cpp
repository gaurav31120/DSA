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

void printLLRecursive(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data;

    if (head->next != NULL)
    {
        cout << " -> ";
    }
    printLLRecursive(head->next);
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    printLLRecursive(head);

    return 0;
}

// O/P - 1 -> 2 -> 3 -> 4

// TC = O(n)
// SC = O(n) because of recursive stack space.