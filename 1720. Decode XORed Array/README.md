# 1720. Decode XORed Array

## Difficulty

**`Easy`** Medium Hard

## Description

There is a **hidden** integer array `arr` that consists of `n` non-negative integers.

It was encoded into another integer array `encoded` of length `n - 1`, `such that encoded[i] = arr[i] XOR arr[i + 1]`. For example, if `arr = [1,0,2,1], then encoded = [1,2,3]`.

You are given the `encoded` array. You are also given an integer `first`, that is the first element of `arr`, i.e. `arr[0]`.

Return the original array `arr`. It can be proved that the answer exists and is unique.
 

### Example 1:

<pre>
<b>Input:</b> encoded = [1,2,3], first = 1
<b>Output:</b> [1,0,2,1]
<b>Explanation:</b> If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
</pre>

### Example 2:

<pre>
<b>Input:</b> encoded = [6,2,7,3], first = 4
<b>Output:</b> [4,2,0,7,4]
</pre>

### Constraints:

* <img src="http://latex.codecogs.com/gif.latex?2<=n<=10^4">
* <img src="http://latex.codecogs.com/gif.latex?encoded.length==n-1">
* <img src="http://latex.codecogs.com/gif.latex?0<=encoded[i]<=10^5">
* <img src="http://latex.codecogs.com/gif.latex?0<=first<=10^5">

