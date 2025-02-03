//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
/*
    int n1=5;
    struct node a,b,c,*head ;
    a.value = n1;
    a.next=&b;
    b.next = &c;
    head=&a;
    b.value=head->value+3;
    //c.value = 11; 
    c.value = head->next->value + 3; 
    c.next = 0;
    */
 
    /*
    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value); //what value for 8
    //printf("%d\n", (*(*head).next).value); //what value for 8
    printf("%d\n", head->next->next->value);
    */
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    /*
    struct node f;
    f.next = &a;
    head = &f;
    f.value = 2;
    printf("%d\n", head ->value );
    printf("%d\n", head ->next->value);
    printf("%d\n", head->next->next->value);
    printf("%d\n", head->next->next->next->value);
    */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    /*
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
      //Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
	    tmp = tmp->next;
        }
	*/
    
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
       
    /*
	tmp = head;
         while(tmp){
            printf("%3d", tmp->value);
	    tmp = tmp->next;
        }
*/
    
 //  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
	NodePtr	h,temp;
	int	i;
	h = (NodePtr)malloc(sizeof(NODE));
	temp = h;
	i = 0;
	while (i < 4)
	{
		printf("Node %d:", i + 1);
		scanf("%d", &(temp->value));
		temp->next = (NodePtr)malloc(sizeof(NODE));
		temp = temp->next;
		i++;
	}
	temp->next = 0;
	temp = h;
	while (temp)
	{
            printf("%3d", temp->value);
	    temp = temp->next;
	}
    //  Exercise VI Free all node !!
         //use a loop to help
	temp = h;
	while(temp)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
    return (0);
}
