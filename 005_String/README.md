# 字串
```
由 0 或多個字元組成的有限序列
s = "a1a2....an" (n >= 0)

主字串: "aaabbbccc"
子字串: 主字串的其中一段,例如 "aab" 為 "aaabbbccc" 的子字串
```

# 字串比較
```
一般英文字母和特殊符號可以用 8 bit 大小來表示 (256字元)
Unicode 使用 16 bit 表達世界所有語言字元(前 256 與 ASCII 一樣)

如果有兩字串
s="a1a2......an"
t="b1b2......bm"

若且唯若 n=m 且 a1=b1, a2=b2 .....an=bm 則 s=t
```

# KMP 比對演算法
```
Kunth-Morris-Partt 三人研究演算法
假設   S = abcdefgab, 要比對 T = abcdex
傳統作法如下:
(1)X
abcde(f)gab
abcde(x)

(2)X
a(b)cdefgab....
 (a)bcdex

(3)X
ab(c)defgab....
  (a)bcdex

(4)X
abc(d)efgab....
   (a)bcdex

(5)X
abcd(e)fgab....
    (a)bcdex

KMP 的觀念是
我們先看 T = abcdex 很明顯 a 和後面字母都不一樣
而我們在第一次比較時
(1)X
abcde(f)gab
abcde(x)

我們就知道 T 中的 bcde 等於 S 中的 bcde 
那也就是說 T 中的 a 一定不可能等於 S 中第 2,3,4,5 的位置
那何必還要再比對一次呢
所以上面步驟 (2),(3),(4),(5) 明顯是多餘的步驟

另一個例子是
S = abcababca
T = abcabx

(1)
abcab(a)bca
abcab(x)

根據上述觀念,因為 T 的 b,c 和 S 的 b,c 一樣
且 a != b,c 所以不用再比較 2,3 位

而且 4,5 位的 a,b 也比較過了,所以不用再比一次
.....
```

# 推論 next
```
再次重複一次,如果輸入字串如下
S = abcdefgab
T = abcdex
前 5 位數字都不一樣,比較如下
(1)
          i=6
S = abcde(f)gab
T = abcde(x)
          j=6
(2)
          i=6
S = abcde(f)gab
T =      (a)bcdex
          j=1
          
          
如果輸入字串如下
S = abcababca
T = abcabx

(1)     
          i=6
S = abcab(a)bca
T = abcab(x)
          j=6

(2) 2,3,4,5 都可以省略不比
          i=6
S = abcab(a)bca
T =    ab(c)abx 
          j=3

第一種 a 和後面都不一樣    j 由 6->1
第二種 a 和後面第 4 位一樣 j 由 6->3
但是 i 都不會變(只會增加)

所以把 j 在 i 位置一個陣列表示 next


next[j] ------- 當 j = 1 時, = 0
          | 
          +---- Max{k|1<k<j 且 p1....pk-1 = pj-k+1...pj-1}
          |
          +---- 1 其他情況
          
例一:
T       = abcdex
j       = 123456
next[j] = 011111          
          
a. 當 j=1 時,next[1] = 0
b. 當 j=2 時,j 由 1 ~ j-1 只有 a            => 其他情況 next[2] = 1
c. 當 j=3 時,j 由 1 ~ j-1 只有 ab 且 a != b => 其他情況 next[3] = 1
d. 以此類推都是 1

例二:
T       = abcabx
j       = 123456
next[j] = 011123          
          
a. 當 j=1 時,next[1] = 0
b. 當 j=2 時,j 由 1 ~ j-1 只有 a             => 其他情況 next[2] = 1
c. 當 j=3 時,j 由 1 ~ j-1 只有 ab  且 a != b => 其他情況 next[3] = 1
c. 當 j=4 時,j 由 1 ~ j-1 只有 abc 且 a != b => 其他情況 next[3] = 1

http://www.ruanyifeng.com/blog/2013/05/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm.html
https://www.coursera.org/course/algs4partII
```
