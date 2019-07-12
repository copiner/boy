### Pointer

### 动态存储分配
C语言支持动态存储分配，即在程序执行期间分配内存单元的能力。利用动态存储分配，可以设计出能根据需要扩大或缩小的数据结构。

虽然动态存储分配适用于所有类型的数据，但主要用于字符串、数组和结构。动态分配的结构特别有趣，因为可以把它们链接形成表、树和其他数据结构。

#### 内存分配函数
为了动态地分配存储空间，需要调用三种内存分配函数的一种，这些函数都是声明在<stdlib.h>头中的。


### 链表
链表（Linked List)是由一连串的结构（称为节点）组成的，其中每个节点都包含指向链中下一个节点的指针。

#### 声明节点类型
...
```c
struct node{
       int value;
       struct node *next;
};
```


#### 在链表的开始处插入节点

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

#### 搜索链表

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

#### 从链表中删除节点

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