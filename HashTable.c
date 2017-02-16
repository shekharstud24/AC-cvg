#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
struct node 
{
  char* nodename;
  int strnum; 
  struct node *next;
}

struct node *hashtable[10000];

long key(char *str)
{
  char *temp;
  temp=str;
  int i;
  long key1=0;
  for(i=0;i<strlen(temp);i++)
  {
    key1=(key1*256)+*temp;
    key1=key1%10000;
    temp++;
  }
  return key1;
}

void insert(char *str,int num)
{
  long key1 =key(str);
  struct node *temp;
  temp=(struct node*)malloc(sizeof(structnode));
  temp->nodename=str;
  temp->strnum=num;
  if(hashtable[key1]==NULL)
  {
    hashtable[key1]=temp;
    temp->next=NULL;
  }
  else
  {
    struct node *temp1;
    temp1=hashtable[key1];
    while(temp1->next!=NULL)
    temp1=temp1->next;
    
    temp1->next=temp;
    temp1=temp;
    temp1->next=NULL;
  }
}
int hashmap(char *str)
{
  long key1=key(str);
  hashtable[key1]=
}
//update
