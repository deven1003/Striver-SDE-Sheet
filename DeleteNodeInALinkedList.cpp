//Delete Node In A Linked List
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
/*
    Time Complexity - O(1)
    Space Complexity - O(1)
*/

void deleteNode(LinkedListNode<int> * node) 
{
    // Create a temp pointer that initially points to node -> next.
    LinkedListNode<int> * temp = node->next;

    // Store the data of temp as node -> data and make node -> next = temp -> next.
    node -> data = temp -> data;
    node -> next = temp -> next;

    // Finally delete the temp pointer.
    delete temp;
}