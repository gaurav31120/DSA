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

Node *insertionAtEnd(Node *head, int key)
{
    Node *newNode = new Node(key);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;

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
    head->next->next->next->next->next = new Node(6);

    int key = 7;

    head = insertionAtEnd(head, key);

    printLL(head);

    return 0;
}

// O/P -- 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7

// TC =  O(n), where n is the length of Linked List.
// SC =  O(1)