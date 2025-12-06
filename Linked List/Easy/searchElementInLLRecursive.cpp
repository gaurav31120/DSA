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

bool searchElementInLLRecursive(Node *head, int key)
{
    if (head == NULL)
        return false;

    if (head->data == key)
        return true;

    return searchElementInLLRecursive(head->next, key);
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

    int isSearch = searchElementInLLRecursive(head, key);
    if (isSearch)
    {
        cout << "Node found";
    }
    else
    {
        cout << "Node not found";
    }

    return 0;
}

// O/P -Node found

// TC =  O(n), where n is the length of Linked List.
// SC =  O(n), Extra space is used in the recursion call stack.