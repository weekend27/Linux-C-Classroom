/*
**print in alphabetic order each group of variable names
**identical in the first num characters(default 6) not ok talloc
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

struct tnode					//the tree node
{
	char *word;					//points to the text
	int match;					//match found
	struct tnode *left;			//left child
	struct tnode *right;		//right child
};

#define MAXWORD	100
#define YES		1
#define NO 		0
#define BUFSIZE 100

struct tnode *addtreex(struct tnode *,char *,int,int *);
void treexprint(struct tnode *);
int getword(char *, int);

main(int argc, char *argv[]){
	struct tnode *root;
	char word[MAXWORD];
	int found = NO;				//YES if match was found
	int num;					//number fo the first ident. chars

	num = (--argc && (*++argv)[0] == '-') ? atoi(argv[0] + 1) : 6;
	root = NULL;
	while(getword(word, MAXWORD) != EOF){
		if(isalpha(word[0]) && strlen(word) >= num)
			root = addtreex(root, word, num, &found);
		found = NO; 
	}
	treexprint(root);
	return 0;
}

struct tnode *talloc(void);
int compare(char *, struct tnode *, int , int *);

//addtreex: add anode with w, at or below p
struct tnode *addtreex(struct tnode *p, char *w, int num, int *found){
	int cond;
	if(p == NULL){					//a new word has arrived
		p = talloc();				//make a new node
		p->word = strdup(w);
		p->match = *found;
		p->left = p->right = NULL;
	}else if((cond = compare(w, p, num, found)) < 0)
		p->left = addtreex(p->left, w, num, found);
	else if(cond > 0)
		p->right = addtreex(p->right, w, num, found);
	return p;
}

//compare:compare words and update p->match
int compare(char *s, struct tnode *p, int num, int *found){
	int i;
	char *t = p->word;

	for(i = 0; *s == *t; i++, s++, t++)
		if(*s == '\0')
			return 0;
	if(i > num){
		*found = YES;
		p->match = YES;
	}
	return *s - *t;
}

//treexprint:in-order print of tree p if p->match == YES
void treexprint(struct tnode *p){
	if(p != NULL){
		treexprint(p->left);
		if(p->match)
			printf("%s\n", p->word);
		treexprint(p->right);
	}
}

//getword:get next word or character from input
int getword(char *word, int lim){
	int c, d, comment(void), getch(void);
	void ungetch(int);
	char *w = word;

	while(isspace(c = getch()))
		;
	if(c != EOF)
		*w++ = c;
	if(isalpha(c) || c == '_' || c == '#'){
		for( ; --lim > 0; w++)
			if(!isalnum(*w = getch()) && *w != '_'){
				ungetch(*w);
				break;
			}
	}else if(c == '\'' || c == '"'){
		for( ; --lim > 0; w++)
			if((*w = getch()) == '\\')
				*++w = getch();
			else if(*w == c){
				w++;
				break;
			}else if(*w == EOF)
				break;
	}else if(c == '/'){
		if((d = getch()) == '*')
			c = comment();
		else
			ungetch(d);
	}
	*w = '\0';
	return c;
}

//comment:skip over comment and return a character
int comment(void){
	void ungetch(int c);
	int c;
	while((c = getch()) != EOF)
		if(c == '*')
			if((c = getch()) == '/')
				break;
			else
				ungetch(c);
	return c;
}

char buf[BUFSIZE];
int bufp = 0;

//get a character
int getch(void){
	return (bufp > 0) ? buf[--bufp] : getchar();
}

//put the character back to input
void ungetch(int c){
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}