#include <stdio.h>
int a[10],size,rear=-1,front=-1;
void enque();
void deque();
void display();
void main(){
int ch;
printf("Enter the size of the queue");
scanf("%d",&size);
while(1){
printf("Enter your choice\n1:push\n2:pop\n3:Display\n4:exit");
scanf("%d",&ch);
if(ch==1)
push();
else if(ch==2)
pop();
else if(ch==3)
display();
else if(ch==4)
break;
else
printf("Invalid choice");
}
}
void enque(){
int e;
printf("Enter the element");
scanf("%d",&e);
if(front==size-1)
printf("Overflow");
else if(front==-1)
front=0;
rear=0;
a[front]=e;
else
a[rear++]=e;
}
void deque(){







