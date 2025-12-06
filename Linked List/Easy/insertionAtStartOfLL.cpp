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

Node *insertionAtStartOfLL(Node *head, int key)
{
    Node *newNode = new Node(key);

    newNode->next = head;
    head = newNode;
    return head;
}

void printLL(Node *head)
{
    Node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data;

        if (curr->next != NULL)
        {
            cout << " -> ";
        }
        curr = curr->next;
    }

    return;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int key = 6;

    head = insertionAtStartOfLL(head, key);

    printLL(head);

    return 0;
}

// O/P -- 6 -> 1 -> 2 -> 3 -> 4 -> 5

// TC =  O(1), where n is the length of Linked List.
// SC =  O(1), Extra space is used in the recursion call stack.