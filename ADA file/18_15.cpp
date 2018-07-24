#include<bits/stdc++.h>
#include<string.h>
using namespace std;
//Node of Linked List
struct Node
{
	string info;
	Node *next;
};
//class containing all functions
class List
{
	Node *head=NULL;
	public:
		void Reverse(Node *);
		void apnd(Node*);
		void append();
		void add(int);
		void deletee(int);
		int totalChars(char);
		void replicate(int);
		void removeAllSubString(string);
		void duplicateList();
		void duplicateReverse();
		void getData();
		void printList();
};
//Function to reverse linked list
void List::Reverse(Node *head)  
{   
	Node *q = NULL;  
	Node *p = head;  
	Node *next ;  
	while(p!=NULL)
	{  
		next = p->next;  
		p->next = q;  
		q = p;  
		p = next;  
	}  
	head = q; 
}
//Function to add given node to end of the list
void List::apnd(Node *nn)
{
	Node *p=head;
	while(p->next)
		p=p->next;
	p->next=nn;
}
//Function to take input from user and add it to end of the list
void List::append()
{
	Node *p=head;
	Node *nn= new Node;
	cin>>nn->info;
	nn->next=NULL;
	if(p==NULL)
	{
		p=nn;
	}
	while(p)
		p=p->next;
	p->next=nn;
}
//function to take input fron user and add it at the given possition
void List::add(int N)
{
	Node *p=head;
	Node* nn= new Node;
	cin>>nn->info;
	nn->next=NULL;
	while(N--)
		p=p->next;
	nn->next=p->next;
	p->next=nn;
}
//function to delete a node fron given possition
void List::deletee(int N)
{
	Node* p=head;
	N--;
	while(N--)
		p=p->next;
	Node* temp=p->next;
	if(temp->next)
		p->next=temp->next;
	else
		p->next==NULL;
	delete(temp);
}
//function to count apprience of a given character in the list
int List::totalChars(char ch)
{
	int count=0;
	Node* p=head;
	while(!p)
	{
		for (int i = 0; i < p->info.size(); i++)
    	{
		    if (p->info[i]==ch)
		    {
		        ++count;
			}
    	}
    	p=p->next;
	}
	return count;
}
//Function to take input from user and append it to the list given number of times 
void List::replicate(int N)
{
	Node* nn=new Node;
	getline(cin,nn->info);
	nn->next=NULL;
	while(N--)
	{
		apnd(nn);
	}
}
//Function to remove all nodes containing the given substring
void List::removeAllSubString(string s)
{
	Node* p=head;
	int i=1;
	while(!p)
	{
		if(p->info.find(s)>0)
			deletee(i);
		++i;
		p=p->next;
	}
}
//Function to create a duplicate list
void List::duplicateList()
{
	Node* p=head;
	Node* q= new Node;
	q->next=NULL;
	Node* h1=q;
	while(!p)
	{
		q->info=p->info;
		q->next=p->next;
		p=p->next;
		q=q->next;
	}
	q=h1;
	while(q)
	{
		cout<<q->info<<"->";
		q=q->next;
	}
	cout<<"NULL";
}
//Function to create a duplicate list in reverse
void List::duplicateReverse()
{
	Node* p=head;
	Node* q= new Node;
	q->next=NULL;
	Node* h1=q;
	while(!p)
	{
		q->info=p->info;
		q->next=p->next;
		p=p->next;
		q=q->next;
	}
	Reverse(h1);
	q=h1;
	while(q)
	{
		cout<<q->info<<"->";
		q=q->next;
	}
	cout<<"NULL";
}
//Function to get inputs
void List::getData()
{
	Node *h;
	int ch,T,N;
	char data;
	string S;
	cin>>T;
	while(T--)
	{
		cin>>ch;
		switch(ch)
		{
			case 1:
				append();
				printList();
				break;
			case 2:
				cin>>N;
				add(N);
				printList();
				break;
			case 3:
				cin>>N;
				deletee(N);
				printList();
				break;
			case 4:
				cin>>data;
				cout<<totalChars(data);
				break;
			case 5:
				cin>>N;
				replicate(N);
				printList();
				break;
			case 6:
				cin>>S;
				removeAllSubString(S);
				printList();
				break;
			case 7:
				duplicateList();
				break;
			case 8:
				duplicateReverse();
				break;
		}
	}
}
//Function to print outputs
void List::printList()
{
	Node* p=head;
	while(p)
	{
		cout<<p->info<<"->";
		p=p->next;
	}
	cout<<"NULL";
}
//driver function
int main()
{
	List L;
	L.getData();
	return 0;
}

