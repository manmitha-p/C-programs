#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct infix
{
  char target[50];
  char stack[50];
  char *s,*t;
  int top;
};
void initinfix(struct infix *p);
void setexpr(struct infix*p,char*a);
void push(struct infix*p,char a);
char pop(struct infix *p);
int priority(char e);
void convert (struct infix *p);
void show(struct infix p);

int main()
{
  char inexpr[50];
  struct infix p;
  initinfix(&p);
  printf("Enter an expression in infix form:\n"); 
  scanf("%s",inexpr); 
  setexpr(&p,inexpr);
  convert(&p);
  printf("The postfix expression is:\n");
  show(p);
  return 0;
}


void initinfix(struct infix *p)
{
  p->top=-1;
  strcpy(p->target,"");
  strcpy(p->stack,"");
  p->t=p->target;
  p->s=" ";
}

void setexpr(struct infix*p,char*a)
{
  p->s=a;
}

void push(struct infix*p,char a)
{
  if(p->top == 50)
  printf("Stack is full\n");
  else
  {
      p->top++;
      p->stack[p->top]=a;
  }
}
char pop(struct infix *p)
{
    if(p->top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        char item=p->stack[p->top];
        p->top++;
        return item;
    }
}

int priority(char e)
{
  if(e=='$')
  return 3;
  if(e=='*'||e=='/'||e=='%')
  return 2;
  else{
      if(e=='+'||e=='-')
      return 1;
      else
      return 0;
  }
}

void convert (struct infix *p)
{  
    char opr;
    while(*(p->s))
    {
        if(* (p->s)==' ' || *(p->s)=='\t')
        {
            p->s++;
            continue;
        }
        if(isdigit(*(p->s)) || isalpha(*(p->s)))
        {
            while(isdigit(*(p->s)) || isalpha(*(p->s)))
            {
                *(p->t) = *(p->s);
                p->t++;
                p->s++;
            }
        }
        if(*(p->s)=='(')
        {
            push(p,*(p->s));
            p->s++;
        }
        if(*(p->s)=='*'||*(p->s)=='+'||*(p->s)=='/'||*(p->s)=='$'||*(p->s)=='-'||*(p->s)=='%')
        {
            if(p->top != -1)
            {
                opr=pop(p);
                while(priority(opr) >= priority(*(p->s)))
                {
                    *(p->t)=opr;
                    p->t++;
                    opr=pop(p);
                }
                push(p,opr);
                push(p,*(p->s));
            }
            else{
                push(p,*(p->s));
                p->s++;
            }
        }
        if(*(p->s)=='(')
        {
            opr=pop(p);
            while((opr) != '(')
            {
                *(p->t)=opr;
                p->t++;
                opr = pop(p);
            }
            p->s++;
        }
    }
    while (p->top !=-1)
    {
        char opr=pop(p);
        *(p->t)=opr;
        p->t++;
    }
    *(p->t)='\0';
}
     
void show(struct infix p)
{
    printf("%s",p.target);
}
