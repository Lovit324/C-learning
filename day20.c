//链表练习
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;		//用于存储下一个节点的地址
}Node;

void	get_number_head	(Node*a)		//输入链表元素（头插法建链表）
{
	int	number;
	do
	{
		scanf_s("%d", &number);
		if (number!=-1)
		{
			Node* p = (Node*)malloc(sizeof(Node));	//动态内存分配
			if (p == NULL)
			{
				printf("内存分配失败\n");
				exit(0);		//退出程序
			}
			p->data = number;		//将输入的元素赋值给新节点
			p->next = a->next;		//将新节点的next指向上一个节点
			a->next = p;			//将链表的头节点next指向新节点（即新节点的地址）
		}
	} while (number != -1);

}

void	get_number_last(Node*a)		//输入链表元素（尾插法建链表)
{
	int number;
	Node* p = a;		//定义一个指针p指向头节点
	do
	{
		scanf_s("%d", &number);
		if (number != -1)
		{
			Node* q = (Node*)malloc(sizeof(Node));	//动态内存分配
			if (q == NULL)
			{
				printf("内存分配失败\n");
				exit(0);		//退出程序
			}
			q->data = number;	//将输入的元素赋值给新节点
			p->next = q;		//将原链表的最后一个节点指针指向新节点（即新节点的地址）
			q->next = NULL;
			p = q;				//将指针p指向新节点（即新节点的地址）
		}
	} while (number != -1);

}

void	 print_list(Node* a)		//打印链表元素
{
	for (Node* p = a->next; p != NULL; p = p->next)	
	{
		printf("%d ", p->data);
	}
	printf("\n");
}

int		seek_list(Node* a, int num)		//查找链表元素
{
	int i = 0;
	for (Node* p = a->next; p != NULL; p = p->next)
	{
		if (p->data == num)
		{
			return i;
		}
		i++;
	}
	return -1;
}

int delete_list(Node* a, int num)		//删除链表元素
{
	Node* p = a;
	printf("请输入要删除的元素,如果不需要删除请输入-1\n");
	scanf_s("%d", &num);
	if (num == -1)
	{
		return 0;
	}
	while (p->next != NULL)
	{
		if (p->next->data == num)
		{
			Node* q = p->next;	//将要删除的节点的地址赋值给q，即q指向要删除的节点
			p->next = q->next;	//将要删除的节点的next赋值给p的next，即使得p的next指向要删除节点的下一个节点
			free(q);			//释放要删除的节点的内存
			print_list(a);		//打印链表元素
			return 1;			//删除成功，返回1
		}
		p = p->next;			//将p指向下一个节点
	}
	return 0;					//删除失败，返回0
}

int main(void)
{
	Node head1 = { 0,NULL };
	Node* a1 = &head1;
	printf("输入链表元素（头插法建链表），输入-1结束\n");
	get_number_head(a1);
	print_list(a1);
	delete_list(a1,0);
	
	printf("\n");

	Node head2 = { 0,NULL };
	Node* a2 = &head2;
	printf("输入链表元素（尾插法建链表），输入-1结束\n");
	get_number_last(a2);
	print_list(a2);
	delete_list(a2, 0);
	return	0;
}