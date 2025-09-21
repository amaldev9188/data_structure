#include <stdio.h>
void merge(int a[],int low,int high,int mid){
int b[20],k=low,i=low,j=mid+1;
while(i<=mid&&j<=high){
if(a[i]<a[j]){
b[k++]=a[i++];
}
else{
b[k++]=a[j++];
}}
while(j<=high){
b[k++]=a[j++];
}
while(i<=mid){
b[k++]=a[i++];
}
for(i=0;i<=high;i++){
a[i]=b[i];
}}
void mergesort(int a[],int low,int high){
int mid;
if(high>low){
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,high,mid);
}}
void main(){
int a[20],i,low,high,l;
scanf("%d",&l);
for(i=0;i<l;i++)
scanf("%d",&a[i]);
low=0;
high=l-1;
mergesort(a,low,high);
for(i=0;i<l;i++)
printf("%d\n",a[i]);
}
