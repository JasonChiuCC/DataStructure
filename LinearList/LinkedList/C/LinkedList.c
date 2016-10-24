#include <LinkedList.h>

/*-----------------------------------------------------------------------
* 初始化 List
*----------------------------------------------------------------------*/
ListPtr InitList()
{
  ListPtr listPtr   = malloc(sizeof(List));
  listPtr->headPtr  = NULL;
  return listPtr;
}

/*-----------------------------------------------------------------------
* 動態建立一個新 Node
*----------------------------------------------------------------------*/
NodePtr CreateNode(int data)
{
    NodePtr pNewNode    = malloc(sizeof(Node));
    pNewNode->data      = data;
    pNewNode->nextPtr   = NULL;    
    return pNewNode; 
}

/*-----------------------------------------------------------------------
* 將 Node 插入頭部(頭差法)
*----------------------------------------------------------------------*/
void ListInsertHead(ListPtr list, int data)
{

}

/*-----------------------------------------------------------------------
* 將 Node 插入尾部(尾差法)
*----------------------------------------------------------------------*/
void ListInsertTail(ListPtr list, int data)
{
  NodePtr currNode = NULL;
  if(list->headPtr == NULL)
  {
    list->headPtr   = CreateNode(data);
  }
  else 
  {
    currNode = list->headPtr; 
    while( currNode->nextPtr != NULL )
    {
      currNode = currNode->nextPtr;
    }
    currNode->nextPtr = CreateNode(data);
  }
}

/*-----------------------------------------------------------------------
* 顯示 List 
*----------------------------------------------------------------------*/
void ListDisplay(ListPtr list) 
{
  NodePtr current = list->head;
  if(list->head == NULL) 
    return;
  while(current->next != NULL){
    printf("%d,", current->data);
    current = current->next;
  }
  printf("%d\n", current->data); 
}









