//
//  node.h
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.

#include <stdlib.h>
#include <stdio.h>

#ifndef node_h
#define node_h

struct node
{
    int value;
    struct node *next;
};

typedef struct node NODE;
typedef NODE* NodePtr;
#endif /* node_h */
//use in case you want to include this .h file many time
