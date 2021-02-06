# 104. Maximum Depth of Binary Tree

## Difficulty

**`Easy`** Medium Hard

## Description

Given the `root` of a binary tree, return its maximum depth.

A binary tree's **maximum depth** is the number of nodes along the longest path from the root node down to the farthest leaf node.
 

### Example 1:

![](https://assets.leetcode.com/uploads/2020/11/26/tmp-tree.jpg)

<pre>
<b>Input:</b> root = [3,9,20,null,null,15,7]
<b>Output:</b> 3
</pre>

### Example 2:

<pre>
<b>Input:</b> root = [1,null,2]
<b>Output:</b> 2
</pre>

### Example 3:

<pre>
<b>Input:</b> root = []
<b>Output:</b> 0
</pre>

### Example 4:

<pre>
<b>Input:</b> root = [0]
<b>Output:</b> 1
</pre>

### Constraints:

* The number of nodes in the tree is in the range <img src="http://latex.codecogs.com/gif.latex?[0,10^4]">.
* `-100 <= Node.val <= 100`
