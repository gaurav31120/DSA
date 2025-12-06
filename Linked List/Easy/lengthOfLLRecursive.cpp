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

int lengthOfLLRecursive(Node *head)
{
    // int count=0;
    if (head == NULL)
    {
        return 0;
    }

    return 1 + lengthOfLLRecursive(head->next);
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    int count = lengthOfLLRecursive(head);

    cout << "Length of LL " << count;

    return 0;
}

// O/P - 6

// TC =  O(n), where n is the length of Linked List.
// SC =  O(n), Extra space is used in the recursion call stack.
