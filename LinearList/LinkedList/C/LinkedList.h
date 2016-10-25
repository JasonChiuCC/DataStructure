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
typedef int             Bool;
typedef struct Node*    PNode;
typedef struct List*    PList;
#define FALSE   0
#define TRUE    1

/*-----------------------------------------------------------------------
* struct defin
*----------------------------------------------------------------------*/
/* Node */
typedef struct Node
{
    ElemType    data;
    PNode       pNext;
}Node;

/* Point to head node */
typedef struct List 
{
    PNode       pHead; 
}List;

/*-----------------------------------------------------------------------
* Function define
*----------------------------------------------------------------------*/
PList   ListInit            (void);
void    ListInsertTail      (PList, ElemType );
void    ListInsertHead      (PList, ElemType );
void    ListDeleteNode      (PList, ElemType );
void    ListDisplay         (PList);
void    ListClear           (PList);
void    ListReverse         (PList); 
Bool    ListEmpty           (PList);





#endif