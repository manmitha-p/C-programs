#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node *p=NULL;
struct node {
int data;
struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
void addafter ( struct node *, int, int ) ;
int main() {
struct node *p ;
p=NULL;
int n,l;
char ch[10];
do {
printf("Enter the value\n");
scanf("%d",&n);
append(&p,n);	
printf("Do you want to append another node? Type Yes/No\n");
scanf("%s",ch);
}while(!strcmp(ch,"Yes"));
printf("The elements in the linked list are ");
display(p);
printf("\n");
do {
printf("Enter the position after which you want to add another node\n");
scanf("%d",&l);
printf("Enter the value\n");
scanf("%d",&n);
addafter(p,l,n);
printf("The elements in the linked list are ");
display(p);
printf("\n");
printf("Do you want to add another node after a certain position? Type Yes/No\n");
scanf("%s",ch);
}while(!strcmp(ch,"Yes"));
return 0;
}
void append ( struct node **q, int data ) {
struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    temp=p;
    while(temp->link!=NULL){
        temp=temp->link;
        temp->link=temp;
    }
}
void display ( struct node *q ) {
	struct node *temp=p;
	while(temp!=NULL){
	    printf("%d ",temp->data);
	    temp=temp->link;
	}
}
void addafter ( struct node *q, int loc, int data ) {
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node *temp=p;
	int i;
	if(loc==1){
	    ptr->link=temp;
	    p=ptr;
	}
	for(i=1;i<loc-1;i++){
	    temp=temp->link;
	}
	ptr->link=temp->link;
	temp->link=ptr;
}
