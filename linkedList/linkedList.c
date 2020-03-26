#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

int Length(struct node* head){
	struct node* current = head;
	int count = 0 ;
	while(current != NULL){
		count++;
		current = current->next;
	}
	return count;
}

int Length2(struct node* head){
	struct node* current = head;
	int count = 0;
	for (current = head; current!=NULL; current = current->next){
		count++;
	}
	return count;
}

int Length3(struct node* head){
	int count = 0;
	while(head != NULL){
		count++;
		head = head->next;
	}
	return count;
}
struct node* BuildOneTwoThree(){
	struct node* head = (struct node*) malloc(sizeof(struct node));
	head->data = 1;
	head->next = (struct node*) malloc(sizeof(struct node));
	head->next->data =2;
	head->next->next =(struct node*) malloc(sizeof(struct node));
	head->next->next->data = 3;
	head->next->next->next = NULL;

	return head;
}

void LinkTest(){
	struct node* head = BuildOneTwoThree();
	struct node* newNode = NULL;

	newNode = malloc(sizeof(struct node);
	newNode->data = 1;
	newNode->next = head;
	head = newNode;
}

void Push(struct node** headRef, int newData){
	struct node* newNode = malloc(sizeof(struct node));

	newNode->data = data;
	newNode->next = *headRef;
	*headRef = newNode;
}

void PushTest(){
	struct node* head = BuildOneTwoThree();

	Push(&head, 1);
	Push(&head, 13);
}

void PushTest2(){
	struct node* head = NULL;

	Push(&head, 1);
	Push(&head, 2);
	Push(&head, 3);
}
// void BasicsCaller(){
// 	struct node* head;
// 	int len;

// 	head = BuildOneTwoThree(); //Start with {1,2,3}
	
// 	Push(&head,13); 
// 	//Push 13 on thr front, yieding{13,1,2,3}
// 	// (the '&' is because head is passed as a reference pointer)
	
// 	Push(&(head->next),42);
// 	//{13,42,1,2,3}

// 	len = Length(head);
// 	}

//Change the passed in head pointer to NULL
void ChangeToNull(struct node** headRef){
	*headRef = NULL;
}

void ChangeCaller(){
	struct node* head1;
	struct node* head2;

	ChangeToNull(&head1);
	ChangeToNull(&head2);
}

struct node* addAtHead(){
	struct node* head = NULL;
	int i;

	for(i=1; i< 6; i++){
		Push(&head,i);
	}

	return(head);
}

struct node* BuildWithSpecialCase(){
	struct node* head = NULL;
	struct node * tail;

	int i;
	Push(&head, 1);
	tail = head;

	for(i = 2; i< 6; i++){
		Push(&(tail->next),i);
		tail = tail->next;
	}

	return(head);
}

struct node* BuildWithDummyNode(){
	struct node dummy;
	struct node* tail = &dummy;

	int i;

	dummy.next = NULL;

	for(i = 1; i<6; i++){
		Push(&(tail->next),i);
		tail = tail->next;
	}
	return (dummy.next);
}

int main(){

}