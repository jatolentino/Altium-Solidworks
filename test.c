#include<stdlib.h>
#include<stdio.h>

struct Node{
  int data;
  struct Node* next;
}Node;

struct Node* head; //global

void Insert(int x){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = head;
  head = temp;
}

void Print(){
  struct Node* temp = head;
  printf("list is: ");
  while(temp != NULL){
    printf("%d  ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main(){
  head = NULL;
  printf("how many numbers?\n");
  
  int n,i,x;
  scanf("%d", &n);
  for (i=0;i<n;i++){
    printf("enter the number \n");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
}
