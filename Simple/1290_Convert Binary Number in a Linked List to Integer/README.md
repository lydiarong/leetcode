## 题目描述

给你一个单链表的引用结点 head。链表中每个结点的值不是 0 就是 1。已知此链表是一个整数数字的二进制表示形式。
请你返回该链表所表示数字的 十进制值 。

示例 1：
- 输入：head = [1,0,1]
- 输出：5
- 解释：二进制数 (101) 转化为十进制数 (5)

示例 2：
- 输入：head = [0]
- 输出：0

示例 3：
- 输入：head = [1]
- 输出：1

示例 4：
- 输入：head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
- 输出：18880

示例 5：
- 输入：head = [0,0]
- 输出：0

## 文件说明
- main.cpp 

可实现题目要求，只在自己电脑上，在leetcode会有Heap-buffer-overflow的错误，是内存非法访问。问题在line 19
```
for(;;head++)
```
因为链表内存分配不一定连续，所以直接+1会访问出界，应该为
```
for(;;head=head->next)
```
- singly_linked_list.cpp

main.cpp 直接用手动创建的链表，在此文件中实现用类实现insert delete等方法

## 解题思路
位运算