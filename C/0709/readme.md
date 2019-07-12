### Pointer

### ��̬�洢����
C����֧�ֶ�̬�洢���䣬���ڳ���ִ���ڼ�����ڴ浥Ԫ�����������ö�̬�洢���䣬������Ƴ��ܸ�����Ҫ�������С�����ݽṹ��

��Ȼ��̬�洢�����������������͵����ݣ�����Ҫ�����ַ���������ͽṹ����̬����Ľṹ�ر���Ȥ����Ϊ���԰����������γɱ������������ݽṹ��

#### �ڴ���亯��
Ϊ�˶�̬�ط���洢�ռ䣬��Ҫ���������ڴ���亯����һ�֣���Щ��������������<stdlib.h>ͷ�еġ�


### ����
����Linked List)����һ�����Ľṹ����Ϊ�ڵ㣩��ɵģ�����ÿ���ڵ㶼����ָ��������һ���ڵ��ָ�롣

#### �����ڵ�����
...
```c
struct node{
       int value;
       struct node *next;
};
```


#### ������Ŀ�ʼ������ڵ�

```c

struct node
*add_to_list(struct node *list, int n)
{
	struct node *new_node;

	new_node = malloc(sizeof(struct node));
	if (new_node == NULL){
	   printf("Error: malloc failed in add_to_list\n");
	   exit(EXIT_FALIURE);
	}

	new_node->value = n;
	new_node->next = list;

	return new_node;

}
first = NULL;

first = add_to_list(first, 10);
first = add_to_list(first, 20);
```

#### ��������

```c
struct node
*search_list(struct node *list, int n)
{
	struct node *p;

	for (p = list; p != NULL; p = p->next){
	    if (p->value == n){
	       return p;
	    }
	    return NULL;
	}


}
```

```c
struct node
*search_list(struct node *list, int n)
{

	for (; list != NULL; list = list->next){
	    if (list->value == n){
	       return list;
	    }
	    return NULL;
	}


}
```

```c
struct node
*search_list(struct node *list, int n)
{

	for (; list != NULL && list->value != n; list = list->next){
	    ;
	}

	return list;
}
```

```c
struct node
*search_list(struct node *list, int n)
{

	while (list != NULL && list->value != n){
	      list = list->next;
	}
	return list;

}
```

#### ��������ɾ���ڵ�

```c
struct node
*delete_from_list(struct node *list, int n)
{
	struct node *cur, *prev;

	for (cur = list, prev = NULL;
	     cur != NULL && cur->value != n;
	     prev = cur, cur = cur->next)
	     ;

	if (cur == NULL)
	   return list;

	if (prev == NULL)
	   list = list->next;
	else
	   prev->next = cur->next;

	free(cur);
	return list;
	      	  
}

```