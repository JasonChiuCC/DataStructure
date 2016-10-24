#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/*-----------------------------------------------------------------------
* Stardand
*----------------------------------------------------------------------*/
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>

/*-----------------------------------------------------------------------
* Type defin
*----------------------------------------------------------------------*/
typedef int             ElemType;
typedef struct Node*    pNode;
typedef struct List*    pList;

/*-----------------------------------------------------------------------
* struct defin
*----------------------------------------------------------------------*/
/* Node */
typedef struct Node
{
    ElemType    data;
    pNode       pnextPtr;
}Node;

/* Point to head node */
typedef struct List 
{
    NodePtr     headPtr; 
}List;

/*-----------------------------------------------------------------------
* Function define
*----------------------------------------------------------------------*/
ListPtr InitList    (void);
void ListInsertTail (ListPtr, int );







#endif