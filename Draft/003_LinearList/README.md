# 線性串列
```
a1 a2 a3 a4 ..... a(i-1) ai a(i+1) a(i-2) ......an
其中 a(i-1) 是 ai 的 predecessor
其中 a(i+1) 是 ai 的 successor

線性串列是 0 個或多個順序的佇列
佇列就是元素之間是有順序的
```

# 線性串列 ADT
```
ADT 線性串列(List)
Data
    資料物件集合為 {a1, a2, a3 ...... an},每個物件型別要相同
    元素之間是一對一的關係,除了 a1 和 an
    每個元素都有一個 predecessor 和一個 successor
    
Operation
    InitList(*L)        : 初始化並建立空的線性 L
    ListEmpty(L)        : 檢查 L 是否為空
    ClearList(*L)       : 清空 L
    GetElem(L,i,*e)     : 取得 L 中第 i 個元素並指派給 e
    LocateElem(L,e)     : 在 L 中搜尋 e,若找到及回傳位置,沒找到回傳 0
    ListInsert(*L,i,e)  : 在 L 的第 i 位置插入 e
    ListDelete(*L,i,*e) : 在 L 的第 i 位置刪除 e 並回傳 e 的值
    ListLength(L)       : L 長度
endADT    
```
