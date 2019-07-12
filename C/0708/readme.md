### struct

```c
struct {
       int number;
       char name[NAME_LEN+1];
       int on_hand;
} part1, part2;
```

```c
struct part {
       int number;
       char name[NAME_LEN+1];
       int on_hand;
};

struct part part1, part2;
```

```c
struct part{
       int number;
       char name[NAME_LEN+1];
       int on_hand;
} part1, part2;

struct part part1 = {528, "Disk drive", 10};
struct part part2;

part2 = part1;
```

```c
typedef struct {
       int number;
       char name[NAME_LEN+1];
       int on_hand;
} Part;

Part part1, part2;
```

```c
struct part {
       int number;
       char name[NAME_LEN+1];
       int on_hand;
};


struct part
build_part(int number, const char *name, int on_hand)
{
	struct part p;

	p.number = number;
	strcpy (p.name, name);
	p.hand = on_hand;
	return p;
}

part1 = build_part(528, "Disk driver", 10);

```
### Union


```c
typedef struct {
	enum {INT_KIND, DOUBLE_KIND} kind;
	union{
		int i;
		double d;
	} u;
} Number;

Number number_array[1000];

n.kind = INT_KIND;
n.u.i = 82;

void
print_number(Number n)
{
	if (n.kind == INT_KIND){
	   printf("%d", n.u.i);
	} else {
	  printf("%g", n.u.d);
	}
}
```

### enum

```c
enum {CLUBS, DIAMONDS, HEARTS, SPADES} s1, s2;
```

```c
enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};

enum suit s1, s2;
```

```c
typedef enum {CLUBS, DIAMONDS, HEARTS, SPADES} Suit;

Suit s1, s2;
```

```c
typedef enum {FALSE, TRUE} Bool;
```
C89������typedef������ö���Ǵ����������͵�һ�ַǳ��õķ�����C99�������õĲ������ͣ�����Ҫ���������塣