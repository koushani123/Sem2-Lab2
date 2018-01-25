include <iostream>
using namespace std;
//Programme to implement doubly linked list

//construction of the node structure

struct node{
	int data;
	node *prev;
	node *next;
}
//The class of linkedList
class linkedList{
	private;
	node *head,*tail;
	public:
	linkedList(){
		head=NULL
		tail=NULL
	}
	//Function to add a node:Addition function
	
void addnode( int n ){
	node *temp = new node;
	temp->data = n;
	if(head=NULL){
		head = temp;
		tail = temp;
		temp->next = NULL;
		temp->prev = NULL;
		tail = temp;
	}
}
//Function to insert a node at a particular position:Insertion function
void insertnode(int n2, int pos1){
	int count = 1;
	node *cur = new node;
	node *pr = new node;
	temp->data=n2;
	temp->prev=NULL;
	temp->next=NULL;
	cur = head;
	if(countnode()>pos1){
		while(count!=pos1){
			pr=cur;
			cur=cur->next;
			curr->prev=pr;
			count++;
		}
		temp->next=cur;
		temp->prev=pr;
		pr->next=temp;
		cur->prev=temp;
	}
	else if(countnode ()<pos1){
		count<<"The node doesnt exist"<<endl;
	}
}
//Function for counting the number of elements in a node:Counting node
int countnode(){
	node *temp;
	temp=head;
	int length=0;
	if(head==NULL){
		cout<<"The number of elements is zero"<<"\n";
	}
	else if(head!=NULL){
		while(temp!=NULL){
			length++;
			temp=temp->next;
		}
		cout<<"The number of elements present in the linkedList are :"<<"\n";
	}
	return length;
}
//Function to display elements of the node:Display function
void displaynode(){
	node *temp;
	temp = head;
	cout<<"The elements in the linkedlist are :"<<"\n";
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<""\n"
	}
	//Function to delete elements of a node at the end:Delete function
	void deleteat (int pos2){
		node *temp=new node;
		node *cur=new node;
		node *pr=new node;
		cur=head;
		while(count!=pos2){
			pr=cur;
			cur=cur->next;
			cur->prev=pr;
			count++ ;
		}
		temp=cur->next;
		pr->next=temp;
		temp->prev=pr;
		delete cur;
	}
};
//Ultimate function for the program
int main(){
	int n2, pos1, pos2;
	linkedList 1;
	l.addnode(1);
	l.addnode(2);
	l.addnode(3);
	l.addnode(4);
	l.addnode(5);
	l.displaynode();
	l.countnode();
	cin<<n2<pos1;
	l.insertnode(n2,pos1);
	cout<<"after insertion of the node at"<<pos1<<"with the value of"<<n2<<":"
}
		}
	}
