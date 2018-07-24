int CompareLists(Node *headA, Node* headB) 
{
    Node *p, *q;
    p=headA;
    q=headB;
    while((q!= NULL) || (p!= NULL)) 
	{
        if((p == NULL) || (q == NULL))
            return 0;
        if(p->data != q->data) 
		{
            return 0;
    	}
     p=p->next;
     q=q->next;
    }
   return 1;
 }
