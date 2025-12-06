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

void searchElementInLL(Node *head, int key)
{
    if (head == NULL)
    {
        cout << "No node exist";
        return;
    }
    while (head != NULL)
    {
        if (head->data == key)
        {
            cout << "Node found";
            return;
        }
        head = head->next;
    }
    cout << "Node not found";
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

    int key = 6;

    searchElementInLL(head, key);

    return 0;
}

// O/P - Node found

// TC =  O(n), Where n is the size of the linked list
// SC =  O(1), As constant extra space is used.