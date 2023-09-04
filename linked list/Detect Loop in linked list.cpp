// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *fast=head,*slow=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return 1;
        }
        return 0;
    }
};
