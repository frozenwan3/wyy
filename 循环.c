#include<stdio.h>
#include<stdlib.h>


typedef struct node//�ýṹ�崴������
{
  int data;
  struct node *next;


}NODE;
   
NODE  *creat(int a);
void   printlink(NODE *h);



NODE * creat(int a)//�������� �����ر�ͷ
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
void printlink(NODE *h)//��ʾ����
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
printf("������ڵ���:\n");
scanf("%d",&a);
head=create(a);
printlink(head);





}