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

Node *insertAtSpecificPosition(Node *head, int key, int pos)
{
    if (pos < 1)
    {
        return head;
    }
    if (pos == 1)
    {
        Node *newNode = new Node(key);
        newNode->next = head;
        return newNode;
    }
    Node *newNode = new Node(key);
    Node *curr = head;

    // Traverse to the node that will be
    // present just before the new node
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }

    // If position is greater than the
    // number of nodes
    if (curr->next == NULL)
    {
        return head;
    }

    // update the next pointers
    newNode->next = curr->next;
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
    int pos = 3;

    insertAtSpecificPosition(head, key, pos);
    printLL(head);
    return 0;
}

// O/P -- 1 -> 2 -> 7 -> 3 -> 4 -> 5 -> 6

// TC =  O(n), where n is the length of Linked List.
// SC =  O(1)