# Push_swap

<img src="https://raw.githubusercontent.com/mbraga-s/42-project-badges/main/covers/cover-push_swap.png" alt="Push Swap">

The push_swap project is intended to sort a given list (numerical, non-repeating) using a limited set of instructions in the lowest number of "moves".

To complete this project, students have to implement a sorting algorithm of their choice. The algorithm's efficiency will be defined and evaluated as a measure of the number of actions it takes to sort the list. For my project, I implemented the algorithm detailed in Duarte Morais's GitHub ([*duarte3333*](https://github.com/duarte3333)).

## Index
I. [Usage](#usage)

II. [Push_swap Rules](#push_swap-rules)

III. [Program "Flow"](#program-flow)

IV. [Testing](#testing)

## Usage

    ./push_swap <Arguments>
    
    eg:
    ./push_swap 35 28 8 16 61 6 60 56 72 22

## Push_swap Rules

> • You have 2 stacks named a and b. 
> • At the beginning:
◦ The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
◦ The stack b is empty.
• The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:
**sa** (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
**sb** (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
**ss** : sa and sb at the same time.
**pa** (push a): Take the first element at the top of b and put it at the top of a. 
Do nothing if b is empty.
**pb** (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
**ra** (rotate a): Shift up all elements of stack a by 1. 
The first element becomes the last one.
**rb** (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
**rr** : ra and rb at the same time.
**rra** (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
**rrb** (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
**rrr** : rra and rrb at the same time.

## Program "Flow"
<div  align="center"> <strong>
PARSING → CHECK   SORT → ALGORITHM → END STAGE
</strong>
</div>

### Parsing
The first thing the program does is validate the input given — I call this step "parsing". During this step it checks if a proper amount of arguments were given and if these arguments followed the rules imposed by the subject. If the checks succeed, the arguments are stored in a linked list called **stack_a**, in the order they were given. Otherwise, the program prints "Error" and exits.

### Check Sort
After parsing, the stack order is checked. If it is already sorted, the program frees the stack and exits. If the stack isn't sorted, the program proceeds to check which sort it runs — sort_2, sort_3, sort_4, sort_5, or the developed algorithm.
### Algorithm
The algorithm implemented follows some very simple steps. To demonstrate these steps, we'll consider the following stack, and we'll apply the algorithm to it.

|<div> 35 </div><div> 28 </div><div> 8 </div><div> 16 </div><div> 61 </div><div> 6 </div><div> 60 </div><div> 56 </div><div> 72 </div><div> 22 </div>| |
|--|--|
|<div> <strong> stack_a </strong> </div>|<div> <strong> stack_b </strong> </div>|

Firstly, we calculate the average of **stack_a** (x̄<sub>a</sub>) which in this case is x̄<sub>a</sub> = 36,4. Then we compare the value at the top of **stack_a** (n<sub>a</sub>) with the calculated average. If n<sub>a</sub> is <u>greater than</u> x̄<sub>a</sub> we use **ra** to place it at the bottom of the stack. Otherwise, we use **pb** to place n<sub>a</sub> at the top of **stack_b**. After each move, we recalculate x̄<sub>a</sub> and compare it with the new number at the top of **stack_a**. We repeat this until there are only 5 values left on **stack_a** <u>regardless of the amount of values we have initially</u> — for example, if our list has 20 values, we repeat this until **stack_a** has 5 and **stack_b** has 15.

Applying this to our stack we get the following:

|<div> 60 </div><div> 56 </div><div> 72 </div><div> 22 </div><div> 61 </div>| <div> 6 </div><div> 16 </div><div> 8 </div><div> 28 </div><div> 35 </div>|
|--|--|
|<div> <strong> stack_a </strong> </div>|<div> <strong> stack_b </strong> </div>|

Now we sort the remaining 5 values of **stack_a**.
|<div> 22 </div><div> 56 </div><div> 60 </div><div> 61 </div><div> 72 </div>| <div> 6 </div><div> 16 </div><div> 8 </div><div> 28 </div><div> 35 </div>|
|--|--|
|<div> <strong> stack_a </strong> </div>|<div> <strong> stack_b </strong> </div>|

Next, we calculate the so called "*best friend*"  of each value in **stack_b** — also known as the smallest number from **stack_a** which is bigger than the number from **stack_b**. So, for each value of our **stack_b** we get:
|6|16|8|28|35|
|--|--|--|--|--|
|<div><strong>22 - 6 = 16 </strong></div><div> 56 - 6 = 50 </div><div> 60 - 6 = 54 </div><div> 61 - 6 = 55 </div><div> 72 - 6 = 66 </div>| <div><strong> 22 - 16 = 6 </strong> </div><div> 56 - 16 = 40 </div><div> 60 - 16 = 44 </div><div> 61 - 16 = 45 </div><div> 72 - 16 = 56 </div>| <div><strong> 22 - 8 = 14 </strong></div><div> 56 - 8 = 48 </div><div> 60 - 8 = 52 </div><div> 61 - 8 = 53 </div><div> 72 - 8 = 64 </div>|<div> 22 - 28 = -6 </div><div><strong> 56 - 28 = 28 </strong></div><div> 60 - 28 = 32 </div><div> 61 - 28 = 33 </div><div> 72 - 28 = 44 </div>|<div> 22 - 35 = -13 </div><div><strong> 56 - 35 = 21 </strong></div><div> 60 - 35 = 25 </div><div> 61 - 35 = 26 </div><div> 72 - 35 = 37 </div>

Using these pairs of values, the number of rotations (**ra**/**rb** or **rra**/**rrb**) needed to place each pair on top of their respective stacks is calculated (we call this number the cost).

|Number (**stack_b**)|"*Best friend*" (**stack_a**)|<div>Cost</div><div> Moves for B I Moves for A </div>
|--|--|--|
|<div align = "center"><strong>6</strong></div><div align = "center"> 16 </div><div align = "center"> 8 </div><div align = "center"> 28 </div><div align = "center"> 35 </div>|<div align = "center"><strong>22</strong></div><div align = "center"> 22 </div><div align = "center"> 22 </div><div align = "center"> 56 </div><div align = "center"> 56|<div align = "center"><strong>0 I 0</strong></div><div align = "center"> 1 I 0 </div><div align = "center"> 2 I 0 </div><div align = "center"> 2 I 1 </div><div align = "center"> 1 I 1 </div> </div>|

This pair is then placed at the top of each stack (if they were not already at the top), and we use **pa** to place n<sub>b</sub> at the top of **stack_a**. The previous steps (calculating the "*best friend*" for each value and the cost) are repeated until **stack_b** is empty.

|<div> 35 </div><div> 56 </div><div> 60 </div><div> 61 </div><div> 72 </div><div> 6 </div><div> 8 </div><div> 16 </div><div> 22 </div><div> 28 </div>| |
|--|--|
|<div> <strong> stack_a </strong> </div>|<div> <strong> stack_b </strong> </div>|

Now all that is left to do is rotate **stack_a** (**ra** or **rra**) until it is sorted.

|<div> 6 </div><div> 8 </div><div> 16 </div><div> 22 </div><div> 28 </div><div> 35 </div><div> 56 </div><div> 60 </div><div> 61 </div><div> 72 </div>| |
|--|--|
|<div> <strong> stack_a </strong> </div>|<div> <strong> stack_b </strong> </div>|

### End Stage
After the stack is sorted and the algorithm has stopped running, both stacks are freed from memory and the program exits.

## Testing
In order to verify my program's efficiency, I used [Yfu's push_swap tester](https://github.com/LeoFu9487/push_swap_tester) to run several random lists of numbers in bulk. I recommend testing your push_swap yourself, then using this tester. Don't forget to test at least for assortments of 5, 10, 100, and 500 numbers.
