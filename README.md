# Push_Swap

The aim of the project is to sort out data on a stack, given a set of limited instructions whilst using the lowest number of actions. Manipulation of various types of algotrithms, to choose the most appropriate one for an optimized data sorting sulution, is needed for success.

At one's disposal are: a set of int values, 2 stacks and a set of instructions to manipulate both stacks. The goal is 2 programs: checker & push_swap. 

Checker reveives integer arguments and reads instructions on the standard output, and displays OK if the integers are sorted, otherwise displays KO after executing all instructions on the integers recieved.

Push_swap calculates and displays the smallest program that sorts integer arguments received.

### Instructions
* sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
* sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
* ss : sa and sb at the same time.
* pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
* pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
* ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
* rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
* rr : ra and rb at the same time.
* rra : reverse rotate a - shift down all elements of stack a by 1. The flast element becomes the first one.
* rrb : reverse rotate b - shift down all elements of stack b by 1. The flast element becomes the first one.
* rrr : rra and rrb at the same time.

### Requirements

-gcc compiler

### Compiling

#### Run the following commands:
* To compile
    * make
* To remove objects:
    * make clean
* To remove objects and binary file:
    * make fclean
* To re-compile:
    * make re

### Executing

* Clone/download the repository
    * git clone --recursive (url)
* cd src/
* Compile 
* Run program:
    * e.g:
        * ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
        * ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG