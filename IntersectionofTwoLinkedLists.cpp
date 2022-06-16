//Intersection of Two Linked Lists
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
    Time Complexity : O(N * M)
    Space Complexity : O(1)

    where N and M are the lengths of the linked lists
*/

int findIntersection(Node *firstHead, Node *secondHead)
{

    Node *firstHeadTmp = firstHead;

    /*
        For every node of first list, traverse the second list and check if is the
        intersection
    */
    while (firstHeadTmp != NULL)
    {
        for (Node *secondHeadTmp = secondHead; secondHeadTmp != NULL; secondHeadTmp = secondHeadTmp->next)
        {
            if (firstHeadTmp == secondHeadTmp)
            {
                return firstHeadTmp->data;
            }
        }
        firstHeadTmp = firstHeadTmp->next;
    }

    //If there is no intersection, return -1
    return -1;
}

