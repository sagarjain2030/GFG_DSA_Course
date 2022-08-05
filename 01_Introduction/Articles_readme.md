### Analysis of Loops:
- O(1):
	- Time complexity is constant
	- That means, irrespective of input size, time taken by algorithm is constant
	- If algorithm doesn't have loop, recursion and call to any other non constant time function, algorithm would have O(1) time complexity.
	- Loop with constant number of runs also considered O(1) complexity.
- O(n):
	- Time complexity of loop is said to be O(n) if loop variable is incremented/decremented by a constant amount.
- O(n^c):
	- Time complexity of nested loops is equal to the number of times the innermost statement is executed.
- O(log n):
	- Time complexity of a loop is considered as O(log n) if the loop variable is divided/multiplied by a constant amount.
	- For example, Binary search has O(log n) time complexity.
- O(log log n);
	- Time complexity of a loop is considered as O(log log n) if loop variables is reduced/increased exponentially bya constant amount.
- When there are consecutive loops, we calculate time complexity as sum of time complexities of individual loops.
- For multiple if else statement, worst case complexity is calculated for if block which takes maximum amount of time.  


### Asymptotic Notations:  
- Θ Notation Gives lower and upper bound of function.
- Θ(g(n)) = f(n), there exist positive constants c1,c2 and n0(n_zero), such that:
	$0 <= c1*g(n) <= f(n) <= c2*g(n)$ for all $n >= n0$
- Ό Notation gives upper bound of function
- Ό(g(n)) = f(n), there exist positive constant c and n0 such that :
	$0 <= f(n) <= c(g(n))$ for all $n >= n0$
- Ω Notation gives lower bound of function
- Ω(g(n)) = f(n), there exist positive constant c and n0 such that :
	$0 <= c(g(n)) <= f(n)$ for all $n >= n0$
	
	
### Worst Average Best Case Time Complexity:  
- It's important to find efficiency  of algorithm in terms of time and space.
- Asymptotic analysis analyzes algorithm based on input size
- 3 cases:
	1. Worst Case:
		- We calculate upper bound on running time of algorithm
	2. Average Case:
		- We calculate running time for all types of inputs and average them.
		- It is required that input should be uniformly distributed.
		- It is not easy to calculate average case
	3. Best Case:
		- We calculate lower bound on running time of algorithm.   
