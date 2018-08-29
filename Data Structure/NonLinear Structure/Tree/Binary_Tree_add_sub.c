#include<stdio.h>
#include<string.h>
typedef struct node {
	int data;
	struct node* left;
	struct node* right;
}Node, *pNode;

pNode root = NULL;

void add(int data)
{
	if (root == NULL) {
		root = (pNode)malloc(sizeof(Node));
		root->data = data;
		root->left = NULL;
		root->right = NULL;
	}
	else {
		pNode newnode = (pNode)malloc(sizeof(Node));
		newnode->data = data;
		newnode->left = NULL;
		newnode->right = NULL;

		pNode up = root;

		while (1)
		{
			if (up->data > data) {
				if (up->left == NULL) {
				up->left = newnode;
				return;
				}
				else up = up->left;
			}
			else if (up->data < data) {
				if (up->right == NULL) {
					up->right = newnode;
					return;
				}
				else up = up->right;
			}
		}
	}
	
}
void sub() {
	if (root == NULL) {
		printf("��� ����"); return;
	}
	pNode up = root->left;
	pNode down = up->right;

	if (down != NULL) {
		while (down->right != NULL)
		{
		up = down;
		down = down->right;
		}
	}

	down->right = root->right;
	down->left = root->left;

	free(root);
	up->right = NULL;

}

int main()
{
	int n;
	int data;
	while (1)
	{
		printf("��� ����\n");
		printf("1. ���� 2. ����\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("�� �Է�");
			scanf("%d", &data);
			add(data);
			break;
		case 2:
			sub();
			break;
		default:
			printf("��ȿ�� �Է�\n");
		}
	}
}