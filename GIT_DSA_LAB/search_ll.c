//searching in linear list 
//binary search
//linear search 
//binary search not possible as you cant go in the middle of the list there fore only linear search is suitable


#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
}*first=NULL;


void create(int a[], int n){
	int i;
	struct Node *t, *last;
	first = (struct Node *)malloc(sizeof(struct Node));
	first->data=a[0];
	first->next=NULL;

	for(i=1;i<n;i++){
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
struct Node *Lsearch(struct  Node *p, int key){
	while(p!=NULL){
		if(key==p->data){
			return p;
		}
		p=p->next;
	}
	return NULL;
}

int main(){
	struct Node *temp;
	int a[]={1,2,3,4,5};
	create(a, 5);
	temp=Lsearch(first, 3);
	int x=temp->data;
	printf("%d \n",temp->data);
}
//  the program isnt working for this linear search method 

