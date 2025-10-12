#include <stdio.h>
#include <ctype.h>
int top=-1;
char s[10];
void push(char e);
int pop();
int prior(char x);
void main(){
char *c,str[20],x;

printf("Enter the infix expression");
scanf("%s",str);
c=str;
while(*c!='\0'){
if(isalnum(*c))
printf("%c",*c);
else if(*c=='(')
push(*c);
else if(*c==')'){
while(x=pop()!='(')
printf("%c",x);
}
else{
while(prior(s[top])>=prior(*c)){
printf("%c",pop());
push(*c);
}}
c++;}
while(top!=-1){
printf("%c",pop());
}
}

void push(char x){
if(top==-1){
top==0;
s[top]=x;}
else
s[++top]=x;
}
int pop(){
if(top!=-1){
return s[top--];
}}

int prior(char x){
if(x=='^')
return 3;
else if(x=='+'||x=='-')
return 2;
else if(x=='*'||x=='/')
return 1;
else
return 0;
}
