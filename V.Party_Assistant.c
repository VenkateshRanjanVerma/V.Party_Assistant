#include<stdio.h>

struct node
{
	int id;
	char name[100];
    int age;
	struct node *next;
	struct node *prev;
	
};

int main()
{	
	int ch,keyid,f=0,k;

	struct node *n,*start,*t;
	do
	{
		printf("\n");
		printf("._______________________^_^  WELCOME TO VENKY'S PARTY________________________________________________________.");
		printf("\n| 1.) INAUGRATION !                                                                                          |");
		printf("\n| 2.) NEW MEMBER IN PARTY                                                                                    |");
		printf("\n| 3.) LEAVE THE PARTY                                                                                        |");	
		printf("\n| 4.) LIST OF ALL JOINED GUESTS                                                                              |");
		printf("\n| 5.) SEARCH ANY MEMBER                                                                                      |");
		printf("\n| 6.) END THE PARTY ,AS A HOST                                                                               |");
		printf("\n|____________________________________________________________________________________________________________|");
		printf("\n PLEASE ENTER YOUR CHOICE:");
		scanf("%d",&ch);
       
	
	  	if(ch==1)
	  	{
			if (f==0){
				n=(struct node*)malloc(sizeof(struct node));
				printf("._______________________^_^  WELCOME TO VENKY'S PARTY________________________________________________________.");
				printf("\n| 1.) INAUGRATION !                                                                                          |");
				printf("\n| 2.) NEW MEMBER IN PARTY                                                                                    |");
				printf("\n| 3.) LEAVE THE PARTY                                                                                        |");	
				printf("\n| 4.) LIST OF ALL JOINED GUESTS                                                                              |");
				printf("\n| 5.) SEARCH ANY MEMBER                                                                                      |");
				printf("\n| 6.) END THE PARTY ,AS A HOST                                                                               |");
				printf("\n|____________________________________________________________________________________________________________|");
				printf("\n PLEASE ENTER YOUR CHOICE:");
				scanf("%d",&ch);	printf("\nPLEASE ENTER YOUR DETAILS (Party Id , Name_without_Space , Age):\n");
				scanf("%d %s %d",&(n->id),n->name,&(n->age));
				
				n->prev=NULL;
				n->next=NULL;
				start=n;
				printf("\n^_^ Thank you 'Dear %s' for Inaugration,\n    Enjoy your party!\n",n->name);
			} else {
				printf("\nSorry,actually '%s' had already inaugrated party, Please choose 2nd option.\n",n->name);
			}
	  
	  	}
		if(ch==2)
		{
			n=(struct node *)malloc(sizeof(struct node));
			printf("\nPLEASE ENTER YOUR DETAILS (Party Id , Name_without_Space , Age):\n");
			scanf("%d %s %d",&(n->id),n->name,&(n->age));
			n->prev=NULL;
			n->next=start;
			start->prev=n;
			start=n;
		}
		if(ch==3)
		{
			struct node *nextnode;
			int pos,i=1;
			printf("\nDetails are (Party Id , Name , Age):");                                          //  Same concept as of "printing the details of every memers in party"
			for(t=start;t->next!=NULL;t=t->next)
			{
			}
				int q=1;
			for(;t!=NULL;t=t->prev)
			{	
				printf("\n%d:) ",q);
				printf("%d ,%s ,%d",t->id,t->name,t->age);
				q++;
			}
			t=start;                                                                                    // ,, ,,  above comment till here
			printf("\nEnter the index no. of yours from the above list, if you want to leave party:\n");
			scanf("%d",&pos);
			while(i<pos-1)
			{
				t=t->next;
				i++;
			}
			nextnode=t->next;
			t->next = nextnode->next;
			free(nextnode);
			printf("\n^_^ Thank you for joining Venky's party.\n    Have a Good Day!\n");
		}
 	  
	  	if(ch==4)
	   	{ 
	   		printf("\nList of which guests you need?\n1.) Teenagers, age less than 18\n2.) Adult, above 18\n3.) Every member in the party\n");
	   		scanf("%d",&keyid);
			if(keyid==1)
			{
				printf("\nDetails are (Party Id , Name , Age):");
				for(t=start;t->next!=NULL;t=t->next){}
				int q=1;
				for(;t!=NULL;t=t->prev)
				{
					if(t->age<18)
					{
						printf("\n%d:) ",q);
						printf("%d ,%s ,%d",t->id,t->name,t->age);
						q++;
					}
				}
				printf("\n");
			}
	 
	   		else if(keyid==2)
			{
				printf("\nDetails are (Party Id , Name , Age):");
				for(t=start;t->next!=NULL;t=t->next) {}
				int q=1;
				for(;t!=NULL;t=t->prev)
				{
					if(t->age >=18)
					{
						printf("\n%d:) ",q);
						printf("%d ,%s ,%d",t->id,t->name,t->age);
						q++;
					}
				}
				printf("\n");
			}
	   		else if(keyid==3)
      		{
	 			printf("\nDetails are (Party Id , Name , Age):");
				for(t=start;t->next!=NULL;t=t->next){}
				int q=1;
				for(;t!=NULL;t=t->prev)
				{
					printf("\n%d:) ",q);
					printf("%d ,%s ,%d",t->id,t->name,t->age);
					q++;
				}
				printf("\n");
	   		}	 
	 	}
	  	if(ch==5)
	 	{
			printf("Do you want to Search any guest with respect to:\n1.)Age\n2.)Party Id\n");
			scanf("%d",&keyid);
			if(keyid==1)
			{
				printf("\nPlease enter his/her 'Age':\n");
				scanf("%d",&keyid);
				for(t=start;t!=NULL;t=t->next)
				{
					if(t->age== keyid)
					{                                                       
						printf("\n DETAILS ARE: %d, %s ,%d\n",t->id,t->name,t->age);                  
					}																	
				}                                                                     
			} 
			else
			{
				if(keyid==2)
				{
					printf("\nPlease enter his/her 'Party Id':\n");
					scanf("%d",&keyid);
					for(t=start;t!=NULL;t=t->next)
					{
						if(t->id== keyid)                                                       
						printf("\n DETAILS ARE: %d, %s ,%d\n",t->id,t->name,t->age);                  																
					}     
					
				}
			}
		}
		if(ch==6)
		{
			printf("WARNING! ,Please take Venky's permission to end the Party\nDid you ask him?\n1.) Yes\n2.) No\n");
			scanf("%d",&keyid);
			if(keyid==1)
			{
				printf("Thank you Sir    ^_^\n");
				exit(0);
			}
			if( keyid==2)
			{
				printf("Please ask the permission    ^_^\n");
			}		
		}
     	f++;     
	} while(ch!=7);
}