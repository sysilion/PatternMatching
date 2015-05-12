# PatternMatching
Test PatternMatching

###1. Simple Pattern Matching

- Input: A text string T which is an array of characters ti for 1 ≤ i ≤ n, and a pattern P of characters pi for 1 ≤ i ≤ m.
- Output: A variable k whose value is the index of the last character of the leftmost substring of T that matches P if such an index exists, and otherwise -1.
- That is, k is the smallest number such that T(k+i-m) = P(i) for 1 ≤ i ≤ m when there is such a k.

~~~
k ← 1 and j ← 1
while k ≤ n and j ≤ m
 {  if tk ≠ pj then k ← k-j+2 and j ← 1
      else k ← k+1 and j ← j+1 } 
if j ≤ n then P matches starting at position k – m
otherwise, P does not match
~~~

###2. String Matching

R contiguous matching rule between two strings of equal length

For any two strings x and y, match(x, y) is true if x and y match on at least r contiguous locations (r less than equal length) as follows
- X:   b**_cab_**cbad
- Y:   d**_cab_**dcba

X and Y are two strings defined over the four-letter alphabet a, b, c, d.

X and Y match at three contiguous locations (underlined).

Thus, match(x, y) is true for r ≤ 3 and false for r > 3.

- Input
  * two strings of equal length
  - X:   bcabcbad
  - Y:   dcabdcba

- Output
  - match(x, y) is true for r ≤ 3
  - or
  - match(x, y) is false for r > 3
