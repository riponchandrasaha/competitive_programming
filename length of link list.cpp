#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node(int d){
		data = d;
		next = nullptr;
	}
};

Node* createLinkedList(){
	Node*head = nullptr;
	Node*tail = nullptr;

	int n,d;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>d;
		Node*n = new Node(d);

		if(head == nullptr){
			head = n;
			tail = n;
		}else{
			tail->next = n;
			tail = n;
		}
	}
	return head;
}

void Print(Node* head){

	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int CalculateLength(Node*head){

	int len = 0;

	while(head){
		len++;
		head = head->next;
	}

	return len;
}


int main(){

	freopen("input.txt","r",stdin);

	Node* head = createLinkedList();
	Print(head);

	cout<< CalculateLength(head)<<endl;

	return 0;
}
