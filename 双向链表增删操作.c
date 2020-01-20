NODE *add(NODE *p)
{
 int i=0,n,m;
 NODE *q,*g;
printf("在第几位增加：");
scanf("%d",&n);
printf("增加的数字是：");
scanf("%d",&m);

q=p;
while(q!=NULL&&i<n-1)
{
q=q->next
i++;
}
if(q->next!=NULL)
{
  g=(NODE*)malloc(sizeof(NODE));
  g->data=m;
  q->next->ppre=g;
   g->next=q->next;
   g->next=q;
   q->next=g;
   q=g;
}
return p;
}
NODE *del(NODE *p);
{
 int i=0,n;
  NODE *q,*g;
  printf("删除第几个节点");
  scanf("%d",&n);
 q=p;
while(q!=NULL&&i<n-1)
{

 q=q->next;
 i++;

}
if(q->next!=NULL)
{
g=q;
g->next->ppre=q;
q->next=g->next;
g=NULL;
}


return p;

}
