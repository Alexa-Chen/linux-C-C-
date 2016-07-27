#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  

#define WORDLENGTH 30  
#define NHASH 300  

typedef struct node* nodeptr;
typedef struct node
{
	char* word;
	int cnt;
	nodeptr next;
} node;

int hash(char* buf)
{
	unsigned n = 0;
	char* p;
	for (p = buf; *p; p++)
		n = 31 * n + (*p);
	return n%NHASH;
}

nodeptr hashTable[NHASH];

//链表法,解决hash的冲突.  
void incword(char* buf)
{
	int n = hash(buf);
	nodeptr p;
	for (p = hashTable[n]; p; p = p->next)
	{
		if (strcmp(p->word, buf) == 0)
		{
			p->cnt++;
			return;
		}
	}
	p = (nodeptr)malloc(sizeof(node));
	p->word = (char*)malloc(strlen(buf) + 1);
	strcpy(p->word, buf);
	p->cnt = 1;
	p->next = hashTable[n];
	hashTable[n] = p;
}

int main()
{
	freopen("1.txt", "r", stdin);
	char buf[WORDLENGTH];
	int i;
	while (scanf("%s", buf) != EOF)
		incword(buf);
	for (i = 0; i<NHASH; i++)
	{
		nodeptr p = hashTable[i];
		for (; p; p = p->next)
			printf("%s %d\n", p->word, p->cnt);
	}

	system("pause");
	
	

}
