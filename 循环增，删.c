NODE *add(NODE *p)
{
   int i=0,n,m;
   NODE *g,*h;
	printf("�ڵڼ�λ����");
	scanf("%d",&n);
      printf("������Ϊ:");
	  scanf("%d",&m);
    h=p;
	  do
   {
     p=p->next;   
     i++;
   }while(p!=h&&i<n-1)
	  if(p==h)
     return  p;
		else  g=(NODE*)malloc(sizeof(NODE));
		      g->data=m;
              g->next=p->next; 
              p->next=g;  
          return h;
}
NODE *del(NODE *p)
{
  int i=0,n;
  NODE *g,*h;
  printf("�ڵڼ����ڵ����ɾ����");
  scanf("%d",&n);
   h=p;
   do{
    p=p->next;
	i++;
   }while(p!=h&&i<n-1)
	   if(p==h)
		   return  p;
	   else  
		   
		   g=p->next;
	       p->next=g->next;
        return h;


}