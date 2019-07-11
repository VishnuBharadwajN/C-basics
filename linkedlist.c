#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* root;
void insert(int x){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->link=NULL;
root=temp;
}
void print(){
struct node*temp=root;
while(temp!=NULL){
printf("%d",temp->data);
temp->root;
}
}
void main(){
root=NULL;
int n,i,x;
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the number: \n");
scanf("%d",&x);
insert(x);
print();
}
}
