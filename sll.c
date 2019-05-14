#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
}a;
struct node* root=NULL;
void creat_list();
void display_nodes();
int length_list();
void add_begin();
void add_end();
void add_given_pos();
int reverse_list();
int delete_node();
void sumof_nodes();

void main()
{
	int ch,length;
	printf("%d\n",sizeof(struct node));
	/*while(1)
	{
		//printf("WELLCOME TO SINGLE LINKED LIST:\n\n");
		printf("1. CREATE A LIST:\n");
		printf("2. DISPLAY THE NODES:\n");
		printf("3. LENGTH OF THE LIST:\n");
		printf("4. ADD THE NODE AT BEGIN:\n");
		printf("5. ADD THE NODE AT END:\n");
		printf("6. ADD NODE AT GIVEN POSITION:\n");
		printf("7. REVERSE THE LIST:\n");
		printf("8. DELETE THE GIVEN NODE:\n");
		printf("9. sum of the nodes in list:\n");
		printf("10. EXIT FROM THE PROGRAM:\n");
		printf("-------------------------------\n");
		printf("ENTER THE YOUR CHOICE:\n");
		scanf("%d",&ch);
		

		switch(ch)
		{
			case 1: creat_list();
				break;

			case 2: display_nodes();
				break;

			case 3: length=length_list();
				printf("THE LENGTH OF THE LIST IS::%d\n",length);
				break;

			case 4: add_begin();
				break;

			case 5: add_end();
				break;

			case 6: add_given_pos();
				break;

			case 7: reverse_list();
				break;

			case 8: delete_node();
				break;
			case 9: sumof_nodes();
				break;

			case 10: exit(1);

			default: printf("PLEASE ENTER THE VALID CHOICE:\n");
				 break;

		}
	}
	*/
}

/*void creat_list()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the data into node:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	root=temp;
	else
	{
		struct node* p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}

void display_nodes()
{
	struct node* p=root;
	if(p==NULL)
	printf("LIST IS EMPTY:\n");
	else
	{
		printf("THE ENTIRE LIST IS:\n");
		while(p!=NULL)
		{

			printf(" %d ",p->data);
			p=p->link;
		}
	}
	printf("\n");
}

int length_list()
{
	struct node* p=root;
	int length=0;
	if(p==NULL)
	printf("LIST IS EMPTY:\n");
	else
	{
		while(p!=NULL)
		{
			length++;
			p=p->link;
		}
		return length;
	}
}

void add_begin()
{
	struct node* p=root;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA INTO NODE:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(p==NULL)
	root=temp;
	else
	{
		temp->link=root;
		root=temp;
	}
}

void add_end()
{
	struct node* p=root;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("PLS ENTER DATA INTO NODE::\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(p==NULL)
	root=temp;
	else
	{
		while((p->link)!=NULL)
		p=p->link;
		p->link=temp;
	}
}

void add_given_pos()
{
	struct node*p=root;
	struct node* temp;
	int pos,i;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("PLS ENTER THE DATA INTO NODE:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;

	printf("ENTER THE POSITION TO ADD:\n");
	scanf("%d",&pos);

	for(i=1;i<pos-1;i++)
	p=p->link;
	temp->link=p->link;
	p->link=temp;
}
	
int reverse_list()
{
	struct node* temp;
	if((root==NULL)||(root->link==NULL))
	return 0;
	struct node* current=root;
	struct node* next=root->link;
	current->link=NULL;
	while(next!=NULL)
	{
		temp=next;
		next=next->link;
		temp->link=current;
		current=temp;
	}
	root=current;
}

int delete_node()
{
	struct node* temp;
	struct node* p=root;
	struct node* q=root;
	int pos,i,length;
	length=length_list();
	//printf("%d\n\n",length);
	printf("ENTER THE POSITION TO DELETE:\n");
	scanf("%d",&pos);
	while(1)
	{
		if(pos>length)
		{
			printf("PLEASE ENTER THE RIGHT POSITION:: \n");
			scanf("%d",&pos);
			continue;			
		}

		else if(pos==1)
		{
			temp=root->link;
			//free(root);
			root=root->link;
		}

	
		for(i=1;i<pos;i++)
		{
			p=q;
			q=q->link;
		}
		p->link=q->link;
		free(q);
		break;
	}
}

void sumof_nodes()
{
	struct node* p=root;
	int sum=0;
	while(p!=NULL)
	{
		sum+=p->data;
		p=p->link;
	}
	printf("THE SUM OF THE NODES IS:%d\n",sum);
}*/

