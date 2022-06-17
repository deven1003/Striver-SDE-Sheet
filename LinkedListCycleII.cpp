//Linked List Cycle II

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
    Time Complexity: O(N ^ 2)
    Space Complexity: O(1)
    Where 'N' is the number of nodes in the linked list.
*/

Node *firstNode(Node *head)
{
    // To keep track of number of nodes passed in the outer loop.
    int numberOfNodesPassed = 0;

    Node *outerLoopNode = head;

    while (outerLoopNode != NULL)
    {
        // Increment the count for current node.
        numberOfNodesPassed++;

        outerLoopNode = outerLoopNode->next;

        Node *innerLoopNode = head;
        int counterForInnerLoop = numberOfNodesPassed;
        while (counterForInnerLoop--)
        {
            // We found a repetitive Node/ Cycle
            if (innerLoopNode == outerLoopNode)
            {
                // Current node of inner loop will be the starting point of cycle.
                return innerLoopNode;
            }
            innerLoopNode = innerLoopNode->next;
        }
    }

    // We didn't find any Cycle.
    return NULL;
}