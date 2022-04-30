# Sorting algorithms & Big O Notation
# Compilation and execution for each sort algorithm

CC = gcc
CFLAGS = -g -Wall -Werror -Wextra -pedantic -std=gnu89

# Bubble Sort
bubble:
	@$(CC) $(CFLAGS) ./test/0-main.c 0-bubble_sort.c print_array.c -o bubble
	@./bubble
	@rm bubble

# Insertion Sort
insertion:
	@$(CC) $(CFLAGS) ./test/1-main.c 1-insertion_sort_list.c print_list.c -o insertion
	@./insertion
	@rm insertion

# Selection Sort
selection:
	@$(CC) $(CFLAGS) ./test/2-main.c 2-selection_sort.c print_array.c -o selection
	@./selection
	@rm selection

# Quick Sort
quick:
	@$(CC) $(CFLAGS) ./test/3-main.c 3-quick_sort.c print_array.c -o quick
	@./quick
	@rm quick
