# 📚 Push Swap

`Push Swap` is a sorting algorithm project implemented in C. The goal is to implement an efficient sorting algorithm using two stacks (`A` and `B`) and a set of operations. The project is about sorting integers with the minimum number of operations while adhering to strict requirements on the types of operations that can be used.

## 🛠 Features

### Core Features
- **Push**: Move the top element of one stack to the other.
- **Swap**: Swap the top two elements of a stack.
- **Rotate**: Rotate all elements of a stack up by one, with the top element going to the bottom.
- **Reverse Rotate**: Rotate all elements of a stack down by one, with the bottom element going to the top.
- **Sorting**: The program sorts a list of integers into ascending order using the fewest operations possible.

### Operations
- **sa**: Swap the first two elements of stack A.
- **sb**: Swap the first two elements of stack B.
- **ss**: Swap the first two elements of both stack A and B.
- **pa**: Push the top element of stack B onto stack A.
- **pb**: Push the top element of stack A onto stack B.
- **ra**: Rotate stack A upwards.
- **rb**: Rotate stack B upwards.
- **rr**: Rotate both stacks A and B upwards.
- **rra**: Rotate stack A downwards.
- **rrb**: Rotate stack B downwards.
- **rrr**: Rotate both stacks A and B downwards.

### Algorithm
- **Push** and **Swap** operations are used to transform the unsorted list into a sorted list.
- The project aims to find the best sequence of operations to minimize the number of moves.
  
### Sorting Strategies
- **Three Elements**: If the list has three or fewer elements, it's sorted using a simple method of swapping and rotating.
- **Five Elements**: For lists of five elements, a more advanced sorting method is used, involving finding the optimal positions for the smallest elements and swapping them.
- **Larger Lists**: For larger lists, the algorithm focuses on breaking down the problem, using cost-effective movements to sort the elements.

## 🚀 Installation  

1. Clone the repository:  
   ```bash
   git clone https://github.com/yourusername/push_swap.git
   cd push_swap
2. Compile the library using the Makefile:
    ```bash
    make
3. Run the program with a list of integers:
    ```bash
    ./push_swap 5 4 3 2 1
4. Use the checker program to verify if the result is correct:
    ```bash
    ./checker 5 4 3 2 1

## Directory structure
    .
    ├── Makefile                # Build and cleaning rules
    ├── checker_linux           # Checker program to verify the result
    ├── includes                # Header files
    │   └── push_swap.h         # Main header file
    ├── libft                   # Custom library (libft)
    │   ├── Makefile            # Makefile for libft
    │   ├── *.c                 # Various C files for libft functions
    │   └── libft.h             # Header file for libft
    ├── main.c                  # Main program entry point
    ├── src                     # Source files for the core logic
    │   ├── checker             # Checker program logic
    │   │   └── checker.c       # Implementation of checker
    │   ├── parsing             # Parsing logic
    │   │   ├── join_argv.c     # Joins the command line arguments
    │   │   └── parsing.c       # Parses the arguments into a stack
    │   └── push_swap           # Core sorting logic
    │       ├── cost.c          # Calculates the cost of each move
    │       ├── lst_push.c      # Push elements between stacks
    │       ├── lst_reverse_rotate.c # Reverse rotate stack operations
    │       ├── lst_rotate.c    # Rotate stack operations
    │       ├── lst_swap.c      # Swap stack operations
    │       ├── mouvements_case.c # Calculates best moves for sorting
    │       ├── push_swap.c     # Main push swap algorithm
    │       ├── sort.c          # Sorting logic for larger lists
    │       ├── sort_five.c     # Sorting logic for five elements
    │       └── sort_three.c    # Sorting logic for three elements
    └── utils                   # Utility functions
        ├── ft_cheaper_move.c   # Finds the cheapest move to sort
        ├── ft_check_sorted.c   # Checks if the stack is sorted
        ├── ft_compare_cost.c   # Compares the cost of moves
        ├── ft_create_stack.c   # Creates a stack from the input
        ├── ft_fill_stack_a.c   # Fills stack A with the given numbers
        ├── ft_find_pos.c       # Finds positions of elements
        ├── ft_free_stack.c     # Frees dynamically allocated memory for the stack
        ├── ft_long_atoi.c      # Converts a string to an integer
        ├── ft_stack_add_back.c # Adds an element to the end of the stack
        ├── ft_stack_add_front.c # Adds an element to the front of the stack
        ├── ft_stack_last.c     # Returns the last element of the stack
        ├── ft_update_index.c   # Updates the indexes of the stack
        ├── max.c               # Finds the maximum value in the stack
        ├── median.c            # Calculates the median of the stack
        └── min.c               # Finds the minimum value in the stack
