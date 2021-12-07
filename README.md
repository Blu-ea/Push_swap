# Push_swap
#### for 42 

============================
##	To do list

1.	Makefile
	- name
	- all
	- clean
	- fclean
	- re

2.	libft a la racine
	- la compile avant

3.	No crash (segfault, bus error, double free, ect...)

4.	No leaks

##	Objectives

-	Starting Condition:
	- Pile A and B
	  -	A = Contend an arbitrary amount of integers (+ or -)
	  -	B = Empty
======================
-	Goal:
	- Sort out A in ascending order in B
======================
-	Available operation:
	- sa: Switch A
	  -	Switch betweens the 2 first nbs in A
	- sb: Switch B
	  -	Switch betweens the 2 first nbs in b
	- ss:
	  -	Do sa and sb

	- [ ] Done

	- pa: Push on A
	  -	push the first nbs of B on A
	  		(nothing if B is empty)
	- pb: Push on B
	  -	push the first nbs of B on A
	  		(nothing if B is empty)

	- [ ] Done

	- ra: Rotate A
	  -	Putt the first nbr of A in last and push up the other
	- ra: Rotate B
	  -	Putt the first nbr of B in last and push up the other
	- rr:
	  -	Do ra and rb

	- [ ] Done

	- rra: Rotate Reverse Rotate A
	  -	Putt the last nbr of A in first and push down the other
	- rra: Rotate Reverse Rotate B
	  -	Putt the last nbr of B in first and push down the other
	- rrr:
	  -	Do rra and rrb
