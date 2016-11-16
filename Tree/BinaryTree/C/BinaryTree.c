#include <BinaryTree.h>

/*-----------------------------------------------------------------------
* 動態建立一個新 Node
*----------------------------------------------------------------------*/
static PNode CreateNode(ElemType data)
{
    PNode pNewNode      = malloc(sizeof(Node));
    pNewNode->data      = data;
    pNewNode->pNext     = NULL;
    return pNewNode;
}

/*-----------------------------------------------------------------------
* 初始化 List
*----------------------------------------------------------------------*/
PList ListInit()
{
  PList pList   = malloc(sizeof(List));
  pList->pHead  = NULL;
  return pList;
}

/*-----------------------------------------------------------------------
* 將 Node 插入頭部(頭差法)
*----------------------------------------------------------------------*/
void ListInsertHead(PList pList, ElemType data)
{
    PNode pCurrNode = NULL;
    if( pList->pHead == NULL )
    {
        pList->pHead = CreateNode(data);
    }
    else
    {
        pCurrNode           = pList->pHead;
        pList->pHead        = CreateNode(data);
        pList->pHead->pNext = pCurrNode;        
    }
}

/*-----------------------------------------------------------------------
* 將 Node 插入尾部(尾差法)
*----------------------------------------------------------------------*/
void ListInsertTail(PList pList, ElemType data)
{
    PNode pCurrNode = NULL;
    if( pList->pHead == NULL )
    {
        pList->pHead = CreateNode(data);
    }
    else 
    {
        pCurrNode = pList->pHead; 
        while( pCurrNode->pNext != NULL )
        {
          pCurrNode = pCurrNode->pNext;
        }
        pCurrNode->pNext = CreateNode(data);
    }
}

/*-----------------------------------------------------------------------
* 將 Node 刪除
*----------------------------------------------------------------------*/
void ListDeleteNode(PList pList, ElemType delData)
{
    PNode pCurrNode = pList->pHead; 
    PNode pPrevNode = pCurrNode; 
    while( pCurrNode != NULL )
    {
        if( pCurrNode->data == delData )
        {
            pPrevNode->pNext = pCurrNode->pNext;
            if( pCurrNode == pList->pHead )
            {
                pList->pHead = pCurrNode->pNext;
            }            
            free(pCurrNode);
            return;
        }    
        pPrevNode   = pCurrNode;
        pCurrNode   = pCurrNode->pNext;     
    }    
}                                   

/*-----------------------------------------------------------------------
* 顯示 List 
*----------------------------------------------------------------------*/
void ListDisplay(PList pList) 
{
    PNode pCurrNode = pList->pHead;
    if( pCurrNode == NULL){ return; }

    while( pCurrNode->pNext != NULL)
    {
        printf("%d -> ", pCurrNode->data);
        pCurrNode = pCurrNode->pNext;
    }
    printf("%d\n", pCurrNode->data); 
}

/*-----------------------------------------------------------------------
* 將 List 清空
*----------------------------------------------------------------------*/
void ListClear(PList pList) 
{
    PNode pCurrNode = pList->pHead; 
    PNode pNextNode = pCurrNode;   
  
    while( pCurrNode != NULL )
    {
        pNextNode = pCurrNode->pNext;
        free(pCurrNode);
        pCurrNode = pNextNode;
    }
    pList->pHead = NULL;
}

/*-----------------------------------------------------------------------
* 反轉 List
*----------------------------------------------------------------------*/
void ListReverse(PList pList) 
{  
    PNode pCurrNode   = pList->pHead;
    PNode pReversed   = NULL;
    PNode pTempNode   = NULL;

    while(pCurrNode != NULL)
    {
        pTempNode           = pCurrNode;
        pCurrNode           = pCurrNode->pNext;
        pTempNode->pNext    = pReversed;
        pReversed           = pTempNode;
    }
    pList->pHead = pReversed;
}


/*-----------------------------------------------------------------------
* 檢查 List 是否為空
*----------------------------------------------------------------------*/
Bool ListEmpty(PList pList) 
{    
    return ( pList->pHead == NULL) ? TRUE : FALSE;
}


