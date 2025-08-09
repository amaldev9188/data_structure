#include <stdio.h>
int a[10],size,top=-1;
void push();
void pop();
void display();
void main(){
int ch;
printf("Enter the size of the stack");
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
void push(){
int e;
if(top==size-1)
printf("Overflow");
else{
printf("Enter the element");
scanf("%d",&e);
top++;
a[top]=e;
}
}
void pop(){
if(top==-1)
printf("Underflow");
else
{
printf("%d",a[top--]);
}}
void display(){
int i;
for(i=0;i<=top;i++)
	printf("%d\t",a[i]);
}




