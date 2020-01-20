#include<stdio.h>
#include<stdlib.h>
 
typedef struct node{ 
 
 int data;
 struct node *next,*ppre;
}NODE;

NODE *creat(void);
void printflink(NODE *h);



int main()
{
 NODE *head;

head=creat();
printflink(head);

return 0;
}


NODE *creat(void)
{
 int i,n;
 NODE *h,*p,*q;
 printf("请输入链表长度:");
 scanf("%d",&n);
  h=p=(NODE *)malloc(sizeof(NODE));
 scanf("%d",&p->data);
   p->next=NULL;
   p->ppre=NULL;
for(i=1;i<n;i++)
{
 
  q=(NODE *)malloc(sizeof(NODE));
  scanf("%d",&p->data); 
  q->next=p->next;
   q->ppre=p;
   p->next=q;
   p=q;
}
return h;
}

void printflink(NODE *h)
{
NODE *p=h;
while(p!=NULL)
{
 printf("%d",p->data);
 p=p->next;
}

}




