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

void lengthOfLL(Node *head)
{
    int count = 0;
    if (head == NULL)
    {
        cout << count;
        return;
    }

    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    cout<<count;
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

    lengthOfLL(head);

    return 0;
}

// O/P - 6

// TC =  O(n), Where n is the size of the linked list
// SC =  O(1), As constant extra space is used.
