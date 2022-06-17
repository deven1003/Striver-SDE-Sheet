//Cycle Detection in a Singly Linked List

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
    Time Complexity : O(N*N)
    Space Complexity : O(1)
    
    Where N is number of Nodes in Linked-List.
*/

bool detectCycle(Node *head)
{
    int numberOfNodesPassed = 0;
    Node *outerLoopNode = head;

    // Iterating over the linked-list.
    while (outerLoopNode != NULL)
    {
        numberOfNodesPassed++;
        outerLoopNode = outerLoopNode->next;
        Node *innerLoopNode = head;
        int counterForInnerLoop = numberOfNodesPassed;

        // Iterating again from the begining.
        while (counterForInnerLoop--)
        {
            //  We found a repetitive Node/ Cycle.
            if (innerLoopNode == outerLoopNode)
            {
                return true;
            }
            innerLoopNode = innerLoopNode->next;
        }
    }

    //  We didn't found any Cycle.
    return false;
}