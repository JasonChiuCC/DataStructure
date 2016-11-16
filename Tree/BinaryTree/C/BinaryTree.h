#ifndef BINARY_TREE_H
#define BINARY_TREE_H

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
typedef struct BiNode*  PBiNode;
#define FALSE   0
#define TRUE    1

/*-----------------------------------------------------------------------
* struct defin
*----------------------------------------------------------------------*/
/* Binary Tree Node */
typedef struct BiNode
{
    PBiNode     pLNode;  // Left
    ElemType    data;    
    PBiNode     pRNode;  // Right
}BiNode;

/*-----------------------------------------------------------------------
* Function define
*----------------------------------------------------------------------*/

#endif