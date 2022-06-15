#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

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

*****************************************************************/

/*
    Time complexity: O(N)
    Space complexity: O(1)

    Where 'N' is the number of elements in the linked list
*/

Node *findMiddle(Node *head) 
{
    // Take a pointer ‘p’ to traverse the linked list, initially pointing to head node
    Node *p = head;

    // Take a variable ‘numberOfNodes’ to count the number of nodes in the linked list
    int numberOfNodes = 0;

    // Count the nodes
    while (p != NULL) {
        numberOfNodes++;
        p = p->next;
    }

    int mid = numberOfNodes / 2;
    
    // Find the mid node
    Node *ptr = head;
    while (mid--) {
        ptr = ptr->next;
    }
    return ptr;
}