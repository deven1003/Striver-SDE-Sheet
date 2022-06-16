//Add Two Numbers As Linked Lists
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
    Time Complexity - O(M + N)
    Space Complexity - O(Max(M, N))

    Where 'M' and 'N' are the number of nodes in the two linked lists.
*/

Node *addTwoNumbersHelper(Node *node1, Node *node2, int carry)
{
    if (node1 == NULL && node2 == NULL && carry == 0)
    {
        // Added both the lists and no carry is generated.
        return NULL;
    }

    // 'VAL1' and 'VAL2' store the data of the current nodes of the two linked lists.
    int val1, val2;

    // 'NEXT1' and 'NEXT2' point to the node present after the current nodes of the two linked lists.
    Node *next1, *next2;

    if (node1 == NULL)
    {
        // List 1 is empty. So, consider the current node's value as zero.
        val1 = 0;
        // And the node after the current node as NULL.
        next1 = NULL;
    }
    else
    {
        val1 = node1->data;
        next1 = node1->next;
    }

    if (node2 == NULL)
    {
        // List 2 is empty. So, consider the current node's value as zero.
        val2 = 0;
        // And the node after the current node as NULL.
        next2 = NULL;
    }
    else
    {
        val2 = node2->data;
        next2 = node2->next;
    }

    // Add the values in the current nodes along with the carry.
    int sum = val1 + val2 + carry;

    // Create the next node of the sum list.
    Node *sumNode = new Node(sum % 10);

    // Recursively call the function to generate the remaining nodes of the sum list.
    sumNode->next = addTwoNumbersHelper(next1, next2, sum / 10);

    return sumNode;
}

Node *addTwoNumbers(Node *head1, Node *head2)
{
    return addTwoNumbersHelper(head1, head2, 0);
}