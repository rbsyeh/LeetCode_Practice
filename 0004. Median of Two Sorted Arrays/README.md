# 4. Median of Two Sorted Arrays

## Difficulty

Easy Medium **`Hard`**


## Description

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return **the median** of the two sorted arrays.

**Follow up:** The overall run time complexity should be `O(log (m+n))`.

 

### Example 1:


<pre>
<b>Input:</b> nums1 = [1,3], nums2 = [2]
<b>Output:</b> 2.00000
<b>Explanation:</b> merged array = [1,2,3] and median is 2.
</pre>

### Example 2:

<pre>
<b>Input:</b> nums1 = [1,2], nums2 = [3,4]
<b>Output:</b> 2.50000
<b>Explanation:</b> merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
</pre>

### Example 3:

<pre>
<b>Input:</b> nums1 = [0,0], nums2 = [0,0]
<b>Output:</b> 0.00000
</pre>

### Example 4:

<pre>
<b>Input:</b> nums1 = [], nums2 = [1]
<b>Output:</b> 1.00000
</pre>

### Example 5:

<pre>
<b>Input:</b> nums1 = [2], nums2 = []
<b>Output:</b> 2.00000
</pre>
 

### Constraints:

* nums1.length == m
* nums2.length == n
* 0 <= m <= 1000
* 0 <= n <= 1000
* 1 <= m + n <= 2000
* <img src="http://latex.codecogs.com/gif.latex?-10^6 <= nums1[i], nums2[i] <= 10^6">
