#include "node.h" 

int	main(void)
{
	NodePtr	t,h;
	int	i;
	
	h = (NodePtr)malloc(sizeof(NODE));
	scanf("%d", &(h->value));
	/*
	t = h;
	t->next = (NodePtr)malloc(sizeof(NODE));
	t = t->next;	
	scanf("%d", &t->value);
	printf("value is %d\n", t->value);
	*/
	i = 0;
	t = h;
	while (i < 5 - 1)
	{
		t->next = (NodePtr)malloc(sizeof(NODE));
		t = t->next;
		scanf("%d", &t->value);
		i++;
	}
	t->next = 0;
	printf("\n");
	t  = h;
	while (t)
	{
		printf("%d\n", t->value);
		t = t->next;
	}
	t = h;
	while (t)
	{
		h = h->next;
		free(t);
		t = h;
	}

 


	return (0);
}
