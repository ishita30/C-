#include <iostream>
using namespace std;
class Node {
	public :
	int data;
	Node *next;

	Node(int data) {
		this -> data = data;
		next = NULL;
	}
};
//Printing a linked list
void print(Node *head)
{
    Node * temp= head;
    while(temp != NUll) // not head->next as then last node won't be printed
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int main() {
    //Creating a linked list
	// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);
	Node n3(5);
	Node n4(10);
	Node n5(15);


	

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	print (head);
	

//	cout << n1.data << " " << n2.data << endl;
	//Dynamically
/*	Node *n3= new Node(10);
	Node *head=n3;
	
	Node *n4= new NOde(20);
	n3->next=n4;*/


}

