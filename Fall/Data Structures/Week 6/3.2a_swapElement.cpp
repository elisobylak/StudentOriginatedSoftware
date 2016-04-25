void swap()
{
 struct node *temp=0,*nxt,*ptr;
 ptr=head;
 int count=0;
 while(ptr)
 {
   nxt=ptr->link;
   if(nxt)
 {
  if(count==0)
    head=nxt;
    count++;
   ptr->link=nxt->link;
   nxt->link=ptr;
   if(temp!=NULL)
   temp->link=nxt;
   temp=ptr;
   if(ptr->link==NULL)
   break;
   ptr=nxt->link->link;
 }