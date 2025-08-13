#define n 5
#include <stdio.h>
void enque();
void deque();
void display();
int q[n],front=-1,rear=-1;
void main(){
int c;
while(1){

printf("Enter your choice \n1:enque\n2:deque\n3:display\n4:stop");
scanf("%d",&c);
if(c==1)
enque();
else if(c==2)
deque();
else if(c==3)
display();
else if(c==4)
break;
else
printf("Invalid Choice");
}}
void enque(){
int e;
if(front==(rear+1)%n)
printf("Q is full");
else if(front==-1){
printf("Enter the element");
scanf("%d",&e);
front=0;
rear=0;
q[rear]=e;}
else{
printf("Enter the element");
scanf("%d",&e);
rear=(rear+1)%n;
q[rear]=e;
}
}
void deque(){
if(front=-1)
printf("The queue is empty");
else if(front==rear){
printf("%dis deleted",q[rear]);
front=-1;
rear=-1;
}
else{
printf("%d",q[front]);
front=(front+1)%n;
}}
void display(){
int i;
for(i=front;i<=rear;i++)
printf("%d",q[i]);
}
