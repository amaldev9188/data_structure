#define MAX 10
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
int s[MAX],top=-1;
void push(int c){
if(top==-1){
top=0;
s[top]=c;
}
else
s[++top]=c;
}
int pop(){
if(top!=-1)
return s[top--];
}
void main(){
char a[20];
int i=0,n,op1,op2,re;
printf("Enter the post fix expression");
scanf("%s",a);
while(a[i]!='\0'){
if(isalpha(a[i])){

push(a[i]-'0');
i++;
}
else{
if(a[i]=='+'){
op1=pop();
op2=pop();
re=op2+op1;
push(re);}
else if(a[i]=='-'){
op1=pop();
op2=pop();
re=op2-op1;
push(re);
}
else if(a[i]=='*'){
op1=pop();
op2=pop();
re=op2*op1;
push(re);
}
else if(a[i]=='/'){
op1=pop();
op2=pop();
re=op2/op1;
push(re);
}
else if(a[i]=='^'){
op1=pop();
op2=pop();
push(pow(op2,op1));
}
i++;
}
}
printf("%d",pop());
}
