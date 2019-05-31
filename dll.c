#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* root=NULL;
void create_list();
void display_list();
int length_of_list();
void add_at_begin();
void add_at_end();
void add_at_given_pos();
void reverse_list();

void main()
{
	int ch,length;

	while(1)
	{
		printf("1.CREATE A LIST:\n");
		printf("2.DISPLAY THE NODES:\n");
		printf("3.LENGTH OF THE LIST:\n");
		printf("4.ADD THE NODE AT BEGIN:\n");
		printf("5.ADD THE NODE AT END:\n");
		printf("6.ADD THE NODE AT GIVEN POSITION:\n");
		printf("7.REVERSE THE LIST:\n");
		printf("8.DELETE THE NODE:\n");
		printf("9.SUM OF THE NODES IN LIST:\n");
		printf("10.EXIT FROM THE LIST:\n");
		printf("--------------------------\n");
		printf("ENTER THE CHOICE:\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: create_list();
			        break;
			case 2: display_list();
			        break;
			case 3: length=length_of_list();
				printf("THE LENGTH OF LIS IS:%d\n",length);
				break;
			case 4: add_at_begin();
				break;
			case 5: add_at_end();
				break;
			case 6: add_at_given_pos();
				break;
			case 7: reverse_list();
				break;
		/*	case 8: delete_node();
				break;
			case 9: sum_of_nodes();
				break; */
			case 10:exit(1);

			default:printf("PLS ENTER THE VALID CHOICE:\n");
				break;

		}
	}
}

void create_list()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA INTO NODE:\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	root=temp;
	else
	{
		struct node* p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		temp->left=p;
		p->right=temp;
	}
}

void display_list()
{
	struct node* p=root;
	printf("THE NODES OF LIST ARE:\n");
	while(p!=NULL)
	{
		printf(" %d ",p->data);
		p=p->right;
	}
	printf("\n");
}

int length_of_list()
{
	struct node* p=root;
	int length=0;
	while(p!=NULL)
	{
		length++;
		p=p->right;
	}
	return length;
}	

void add_at_begin()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA INTO NODE:\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		root->left=temp;
		temp->right=root;
		root=temp;
	}
}

void add_at_end()
{
	struct node* temp;
	temp=(struct node*)malloc(24);
	printf("ENTER THE DATA INTO NODE:\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node* p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		//temp->left=p;
		p->right=temp;
		temp->left=p;
	}
}

void add_at_given_pos()
{
	int i=1,pos,length;
	struct node* temp;
	struct node* p=root;
	temp=(struct node*)malloc(24);
	printf("ENTER THE DATA INTO NODE:\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	printf("ENTER THE POSITION TO ADD:\n");
	scanf("%d",&pos);
	length=length_of_list();
	while(1)
	{
		if(pos>length)
		{
			printf("PLS ENTER POSITION IN RANGE:\n");
			scanf("%d",&pos);
			continue;
		}
		break;
	}
	while(i++<pos-1)
	p=p->right;
	temp->left=p;
	temp->right=p->right;
	p->right=temp;
}

void reverse_list()
{
	struct node* current=root;
	struct node* next=root->right;
	current->right=NULL;
	while(next!=NULL)
	{
		struct node* temp=next;
		next=next->right;
		temp->right=current;
		temp->left=current->left;
		current=temp;
	}
	root=current;
}
	

	


