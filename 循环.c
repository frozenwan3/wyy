#include<stdio.h>
#include<stdlib.h>


typedef struct node//用结构体创建链表
{
  int data;
  struct node *next;


}NODE;
   
NODE  *creat(int a);
void   printlink(NODE *h);



NODE * creat(int a)//创建链表 ，返回表头
{
  NODE *h,*p,*q;
  int i;
  h=p=(NODE *)malloc(sizeof(NODE));
     scanf("%d",&p->data);
	 p->next=h;
	 for(i=1;i<a;i++)
	 {
	 q=(NODE *)malloc(sizeof(NODE));
     p->next=q; 
	 scanf("%d",&q->data);
	 q->next=h;
	 q=p;
	 }
  return h;
}
void printlink(NODE *h)//显示链表
{
NODE *p=h;
  do
  {
    printf("%5d",p->data);
		p=p->next;
  
  
  }while(p!=h)

return ;

}
int main(void)
{
  NODE *head;
int a;
printf("请输入节点数:\n");
scanf("%d",&a);
head=create(a);
printlink(head);





}