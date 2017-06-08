/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    
     struct Node* SLOW_T=head;
     struct Node*  FAST_H=head;
    
    while(FAST_H->next->next!=NULL&&SLOW_T->next!=NULL&&SLOW_T&&FAST_H)
      {
       SLOW_T= SLOW_T->next;
       FAST_H=FAST_H->next->next;
        if(SLOW_T==FAST_H)   // compare node
            return 1;        
    }
    return 0;
}

