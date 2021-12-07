//stack using array 
#include<stdio.h>
#include<stdlib.h>
struct Stack{
	int size;
	int top;
	int *S;
};

void create(struct Stack *s){
	printf("enter size:");
	scanf("%d",&s->size);
	s->top=-1;
	s->S=(int *)malloc(s->size*sizeof(int));
}

void push(struct Stack *s, int x){
	if(s->top==s->size-1){
		printf("overflow \n");
	}
	else{
		s->top++;
		s->S[s->top]=x;
	}
}

int pop(struct Stack *s){
	int x = -1;
	if(s->top==-1){
		printf("underflow \n" );
	}
	else{
		x=s->S[s->top--];
	}
	return x;
}

int display(struct Stack s){
	int i;
	for(i=s.top;i>=0;i--){
		printf("%d", s.S[i]);
	printf("\n");
	}
	return 0;
}

int main(){
	struct Stack s;
	create(&s);

	push(&s, 10);
	push(&s, 20);
	push(&s, 30);
	push(&s, 40);

	display(s);

	pop(&s);
	printf("updated stack: \n");
	display(s);


}












