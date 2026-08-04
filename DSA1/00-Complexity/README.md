Basic Time Complexity

Before starting DSA problems, I learned some basic ideas about time complexity.

Time complexity helps us understand how the running time of a program changes when the input size becomes larger.

O(1) - Constant Time

In constant time complexity, the number of operations does not depend on the input size.

Example:

cout << numbers[0];

It only accesses one element, so the complexity is O(1).

O(n) - Linear Time

In linear time complexity, the number of operations increases with the input size.

Example:

for (int i = 0; i < n; i++) {
    cout << numbers[i] << " ";
}

If the array has n elements, the loop runs n times.

So, the time complexity is O(n).

O(n²) - Quadratic Time

Quadratic time complexity usually happens when one loop is inside another loop.

Example:

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << i << " " << j << endl;
    }
}

Both loops run n times, so the total number of operations is n × n.

The time complexity is O(n²).

Complexity Order

From faster to slower:

O(1)
O(log n)
O(n)
O(n log n)
O(n²)
What I Learned
The basic meaning of time complexity
Difference between O(1), O(n) and O(n²)
How loops affect program complexity
Why efficient solutions are important
Note

These are my basic notes about time complexity.

I will learn more complexity concepts while solving different DSA problems.