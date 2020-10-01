#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct list
{
    struct list *next,*previous;
    int value;
}list;

struct list* create()
{
    int choise=1;
    static list*newnode,*temp,*head,*temp1;
    head=0;
    while (choise==1)
    {
        newnode=(list*)malloc(sizeof(list));
        printf("ENTER VALUE\n");
        scanf("%d",&newnode->value);
        newnode->next=0;
        if (head==0)
        {
        head=newnode;
        temp=head;
        
        }
        
        else 
        {
            printf("%d\n",temp);
            temp->previous=temp1;
             printf("%d\n",temp->previous);
            temp->next=newnode;
             printf("%d\n",temp->next);
            temp1=temp;
            printf("%d\n",temp1);
            temp=newnode;
        }
        printf("DO YOU WANT TO CONTINUE IF YES THEN PRESS 1 OR PRESS ANY KEY");
        scanf("%d",&choise);
    }
return head;
}

int main()
{
    create();
    return 0;

}
