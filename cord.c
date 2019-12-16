#include <stdio.h>

#include <stdlib.h>

#include <string.h>


#define MAX_NAME 50

#define TRUE 1


typedef struct node *NodePointer;

typedef struct node {

        int price;

        char bname[MAX_NAME];
        char hname[MAX_NAME];

        char pname[MAX_NAME];

        NodePointer link;

} Node;


void Make_Node(NodePointer );

void Print_Node(NodePointer );

void delete_Node(NodePointer);

int main( void )
{

        int i,j;

        int nember;

        char ch=0;

        NodePointer head = NULL;

        NodePointer temp = head;


        while(TRUE)

        {

                printf("1) INPUT \n 2) OUTPUT \n 3) REVISE \n 4) FINISH  \n");

                scanf("%d",&nember);

                switch(nember)

                {

                case 1:

                        Make_Node(&head);

                        break;
               case 2:

                        Print_Node(head);

                        break;


                case 3:

                        delete_Node(head);

                        break;


                case EOF:

                        return 0;
                        break;

                }

        }

}
void Make_Node(NodePointer *temp)

{

        int i;

        NodePointer item;

        NodePointer cur  = *temp;


        item = (NodePointer)malloc(sizeof(Node));

        printf(" Book Title : ");

        scanf("%s", item->bname);

        printf(" Author Name : ");

        scanf("%s", item->hname);

        printf("Publisher Name : ");

        scanf("%s", item->pname);

        printf(" Price : ");

        scanf("%d", &item->price);


        item->link = NULL;
   if(*temp == NULL)

        {



                *temp = item;

                return ;

        }


        else

        {

                for( ; ;  )

                {

                        if((cur)->link == NULL)

                        {

                                (cur)->link  = item;

                                break;

                        }

                        cur = cur->link;

        }




        }

}


void Print_Node(NodePointer temp)

{

        for( ; temp != NULL ;temp = temp->link)

        {

                 printf(" Book Title :%s \n", item->bname );

                 printf(" Author Name : %s \n", item->hname);

                 printf("Publisher Name : %s \n", item->pname);
                 printf(" Price : %d \n", &item->price);

        }

}


void delete_Node(NodePointer *node)

{

        char findname[30];

        NodePointer temp = *node;

        NodePointer item;

        printf("revising book name :");

        scanf("%s",findname);


        for( ; temp != NULL ;temp = temp->link)

        {

                if(strcmp(temp->name,findname)== 0)

                {

                        printf(" Book Title :%s \n", item->bname );

                         printf(" Author Name : %s \n", item->hname);

                         printf("Publisher Name : %s \n", item->pname);

                         printf(" Price : %d \n", &item->price);


                        item->link = temp->link;


                        free(temp);

                        break ;

  }


                item = temp;

        }

        if(temp == NULL)

                {

                printf("Can't find.\n");

        }


