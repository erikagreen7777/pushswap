#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int number;
	struct list *prev;
	struct list *next;
}				list;

int		create_node(list **root, int size);
void	print_node(list **root);
list	*rotate_node(list **root);

int main(void)
{
	list *root;
	int size;
	int number;
	int rotate;
	int i;


	root = NULL;
	scanf("%d %d", &size, &rotate);

	for (i = 0; i < size; i++)
	{
		scanf("%d", &number);
		if (create_node(&root, number) == 1)
			return (1);
	}
	print_node(&root);
	for (i = 0;i < rotate; i++)
	{
		rotate_node(&root);
		printf("rotation %d:\n", i + 1);
		print_node(&root);

	}	
	return (0);
}

int	create_node(list **root, int number)
{
	list *node;
	list *prev_node;

	prev_node = *root;
	node = malloc(sizeof(list));
	if (node == NULL)
		return (1);
	node->number = number;
	node->prev = NULL;
	node->next = NULL;

	if (*root == NULL)
		*root = node;
	else
	{
		node->next = *root;
		(*root)->prev = node;

		if (prev_node->next == NULL)
			prev_node->next = node;
		else 
		{
			while (prev_node->next != *root)
				prev_node = prev_node->next;
			prev_node->next = node;
		}
		node->prev = prev_node;
	}
	return (0);
}

void	print_node(list **root)
{
	list	*current_node;
	current_node = *root;

	while (current_node->next != *root)
	{
		printf("-> %d\n", current_node->number);
		current_node = current_node->next;
	}
	printf("-> %d\n", current_node->number);
}

list	*rotate_node(list **root)
{
	list *prev_node;

	prev_node = (*root)->prev;
	*root = prev_node;
	return (*root);
}