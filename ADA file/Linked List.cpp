#include<iostream>
#include<string>

using namespace std;

class node	{	string s;
				node *next;
			public:
				node(string x) {
					s=x;
				}
				node(string x, const node *n) {
					s=x;
					next=n;
				}
				void setString(string x) {
					s=x
				}
				void setNext(node *n) {
					next=n;
				}
				string getString() {
					return s;
				}
				node * getNext() {
					return next;
				}
};

class list	{
			public:
				node * add(node *);
				node * add(node *, int);
				node * del(node *, int);
				int * totalChars(node *, char);
				node * replicate(node *, int);
				node * removeAllSubStrings(node *, char *);
				node * duplicateList(node *);
				node * duplicateReverse(node *);
};

node * list::add() {

	
	char str[100];
	gets(str);
	node *p, *q;
	p=new node(str, NULL);
	if(head==NULL) {
		head=p;
		return;
	}
	q=head;
	while(q->getNext()!=NULL)
		q=q->getNext();
	q->setNext(p);
	
	free(p);
	free(q);
	return head;
}

node * list::add(node *head, int x) {

	char str[100];
	gets(str);
	node *cur=new Node, *temp=new Node;
	temp->s=str;
	if(head==NULL)
		head=temp;
	else {	int i=0;
			cur=head;
			while(cur!=NULL) {
				if(x==0) {
					temp->getNext()=cur->getNext();
					head=temp;
					break;
				}
				else if(i==x-1) {
					temp=cur->getNext();
					cur->getNext()=temp;
					break;
				}
				++i;
				cur=cur->getNext();
			}
	}
	free(cur);
	free(temp);
	return head;
}

node * list::del(node *head, int x) {

	if(head==NULL) {
		cout<<"List Empty";
		return head;
	}
	node *cur, *ptr;
	int count=0;
	cur=head;
	if(x==1)
		head=cur->getNext();
	else {	while(cur) {
				cur=cur->getNext();
				++count;
			}
			if(x>0 && x< counter+1) {
				cur=head;
				for(int i=1; i<x; ++i) {
					ptr=cur;
					cur=cur->getNext();
				}
				ptr->getNext()=cur->getNext();
			}
			else cout<<"Postion Out of Range..."<<endl;
	}
	free(cur);
	free(ptr);
	return head;
}

int * list::totalChars(node *head, char c) {

	if(head==NULL) {
		cout<<"List Empty"<<endl;
		return 0;
	}
	
	int count=0;
 	node *cur;
	cur=head;
	
	while(cur) {
		char s[100]=cur->getString();
		for(int i=0; i<strlen(cur->getString()); ++i)
			if(s[i]==c)
				++count;
		cur=cur->getNext();
	}
	
	free(cur);
	return count;
}

node * list::replicate(node *head, int x) {

	node *cur, *temp=new node;
	cur=head;
	while(cur) {
	
		temp->setString(cur->getString());
		temp->setNext(cur->getNext());
		for(i=0; i<x; ++i) {
			cur->getNext()->setString(cur->getString());
			cur=cur->getNext();
		}
	}
}
