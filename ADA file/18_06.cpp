int FindMergeNode(Node *headA, Node *headB) 
{
    Node *p=headA, *q=headB;

    while(p) 
	{
        q=headB;
        while(q) 
		{
            if(p==q)
                return p->data;
            q=q->next;
        }
        p=p->next;
    }
    return 0;
}
