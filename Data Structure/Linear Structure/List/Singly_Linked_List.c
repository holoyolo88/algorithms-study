#include<stdio.h>
#include<stdlib.h> // for malloc(), exit()

typedef struct a {
	int data;
	struct a * next;
}A;


void Insert(A*head, int buffer)
{
	A* current = malloc(sizeof(A));
	A* previous = malloc(sizeof(A));

	current = head;

	if (head != NULL) {
		while (current!=NULL && current->data<buffer)
		{
			previous = current;
			current = current->next;
		}

		A * newnode = malloc(sizeof(A));
		newnode->data = buffer;

		newnode->next = current;
		previous->next = newnode;
	}
	else {
		A * newnode = malloc(sizeof(A));
		newnode->data = buffer;

		newnode->next = head->next;
		head->next = newnode;
	}
}


/*void Print(A* head)
{
	A* tmp = malloc(sizeof(A));
	tmp = head->next;
	while (tmp != NULL){
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
}*/

void Delete(A* head,int buffer)
{
	A* current = malloc(sizeof(A));
	A* previous = malloc(sizeof(A));
	current = head;
	if (head != NULL) {
		while (current != NULL && current->data!=buffer){
			previous = current;
			current = current->next;
		}
		A* delnode = malloc(sizeof(A));
		delnode = current;
		previous->next = delnode->next;
		free(delnode);
	}
	else
		printf("Error");
}

/*void sub(A* head)
{
	if (head->link != NULL)
	{
		A* delnode = malloc(sizeof(A));
		delnode = head;
		head->link = delnode->link;
		free(delnode);
	}
	else
		printf("¿À·ù");
}*/

void main()
{
	int input;
	int buffer;
	A* head = malloc(sizeof(A));
	head->next = NULL;


	while (1)
	{
		printf("Choose the function.\n");
		printf("1. Insert 2. Delete 3. Print 4. Exit\n");
		scanf("%d", &input);
		switch (input){
		case 1:
			printf("Input Numercial Data");
			scanf("%d", &buffer);
			Insert(head, buffer);
			break;
		case 2:
			printf("Indut Numercial Data");
			scanf("%d", &buffer);
			Delete(head, buffer);
			break;
		case 3:
			Print(head);
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Error : Wrong Input");
		}
	}
}
