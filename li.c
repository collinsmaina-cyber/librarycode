#include<stdio.h>

int main()
{
//calculation of fine amount
    int a;
    int b;
    int c;
    int daysoverdue;
    int finerate;
    int fineamount;
    
    printf("enter the book id:");
    scanf("%d",&a);
    
    printf("enter the due date:");
    scanf("%d",&b);
    
    printf("enter the return date:");
    scanf("%d",&c);
    
    //daysoverdue=c_b
    
    
    if(daysoverdue<=0);
    {
    finerate=0;
    
    fineamount=0;
    }
     
    if(daysoverdue<=7);
    {
    finerate=20;
    fineamount=daysoverdue*finerate;
    }
    
    if(daysoverdue<=14);
    {
    finerate = 50;
    fineamount = daysoverdue*finerate;
    }
    
    {
    finerate=100;
    fineamount=daysoverdue*finerate;
    }
    
    printf("book id:%d\n",a);
    printf("due date:%d\n",b);
    printf("return date:%d\n",c);
    printf("days overdue:%d\n",daysoverdue);
    printf("fine rate:sh %dper day\n",finerate);
    printf("fine amount:sh %d\n",fineamount);
    
    
    
    return 0;
}