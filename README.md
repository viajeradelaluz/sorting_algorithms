# 0x1B. C - Sorting algorithms & Big O
## Details
      By Alexandre Gautier          Weight: 2          Project to be done in teams of 2 people                Ongoing project - started 02-10-2022, must end by 02-16-2022 (in 4 days)          - you're done with 0% of tasks.              Checker will be released at 02-13-2022 12:00 AM              An auto review will be launched at the deadline       ![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png) 

## Background Context
This project is meant to be done by groups of two students. Each group of two should  [pair program](https://intranet.hbtn.io/rltoken/QcXizPyNa4DTAMLNzCwdHg) 
  for at least the mandatory part.
## Resources
Read or watch :
* [Sorting algorithm](https://intranet.hbtn.io/rltoken/tmzgO7xhCpNgPUxVhLKibw) 

* [Big O notation](https://intranet.hbtn.io/rltoken/XrLMaOhUMHfwsFEz15TVow) 

* [Sorting algorithms animations](https://intranet.hbtn.io/rltoken/kJ7rgWoqdLnxSnSEoAiFCQ) 

* [15 sorting algorithms in 6 minutes](https://intranet.hbtn.io/rltoken/RdvoGNMTJ6Hq34aJ_HmCqA) 
 (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
## Learning Objectives
At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/NwGzC3ck-xCcOmVIIbZn9Q) 
 ,  without the help of Google :
### General
* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm
## Requirements
### General
* Allowed editors:  ` vi ` ,  ` vim ` ,  ` emacs ` 
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A  ` README.md `  file, at the root of the folder of the project, is mandatory
* Your code should use the  ` Betty `  style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) 
 and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) 

* You are not allowed to use global variables
* No more than 5 functions per file
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
* In the following examples, the  ` main.c `  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  ` main.c `  files at compilation. Our  ` main.c `  files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called  ` sort.h ` 
* Don’t forget to push your header file
* All your header files should be include guarded
* A list/array does not need to be sorted if its size is less than 2.
### GitHub
There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.
## More Info
### Data Structure and Functions
* For this project you are given the following  ` print_array ` , and  ` print_list `  functions:
```bash
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

```
```bash
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

```
* Our files  ` print_array.c `  and  ` print_list.c `  (containing the  ` print_array `  and  ` print_list `  functions) will be compiled with your functions during the correction.
* Please declare the prototype of the functions  ` print_array `  and  ` print_list `  in your  ` sort.h `  header file
* Please use the following data structure for doubly linked list:
```bash
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

```
Please, note this format is used for Quiz and Task questions.
*  ` O(1) ` 
*  ` O(n) ` 
*  ` O(n!) ` 
* n square ->  ` O(n^2) ` 
* log(n) ->  ` O(log(n)) ` 
* n * log(n) ->  ` O(nlog(n)) ` 
* n + k ->  ` O(n+k) ` 
* …
Please use the “short” notation (don’t use constants). Example:   ` O(nk) `   or   ` O(wn) `   should be written   ` O(n) `  .If an answer is required within a file, all your answers files must have a newline at the end.
### Tests
Here is a quick tip to help you test your sorting algorithms with big sets of random integers:  [Random.org](https://intranet.hbtn.io/rltoken/KkFXByKWf55lTK32JnY62w) 

## Quiz questions
Show
#### 
        
        Question #0
    
 Quiz question Body What is the time complexity of this function / algorithm?
 ` void f(int n)
{
    printf("n = %d\n", n);
}
 `  Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #1
    
 Quiz question Body What is the time complexity of this function / algorithm?
 ` void f(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("[%d]\n", i);
    }
}
 `  Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #2
    
 Quiz question Body What is the time complexity of this function / algorithm?
```bash
void f(int n)
{
    int i;

    for (i = 0; i < n; i += 98)
    {
        printf("[%d]\n", i);
    }
}

```
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #3
    
 Quiz question Body What is the time complexity of this function / algorithm?
```bash
void f(unsigned int n)
{
    int i;

    for (i = 1; i < n; i = i * 2)
    {
        printf("[%d]\n", i);
    }
}

```
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #4
    
 Quiz question Body What is the time complexity of this function / algorithm?
```bash
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}

```
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #5
    
 Quiz question Body What is the time complexity of this function / algorithm?
 ` foreach($numbers as $number)
{
    echo $number;
}
 `  Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #6
    
 Quiz question Body What is the time complexity of this function / algorithm?
```bash
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}

```
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #7
    
 Quiz question Body What is the time complexity of this function / algorithm?
```bash
void f(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 1; j < n; j = j * 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
        else
        {
            for (j = 0; j < n; j = j + 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
    }
}

```
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #8
    
 Quiz question Body What is the time complexity of this function / algorithm?
```bash
int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}

```
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #9
    
 Quiz question Body What is the time complexity of this function / algorithm?
```bash
def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33

```
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #10
    
 Quiz question Body What is the time complexity of this function / algorithm?
```bash
void f(int n)
{
     int i;
     int j;

     for (i = 0; i < n; i++)
     {
          for (j = i + 1; j < n; j++)
          {
               printf("[%d] [%d]\n", i, j);
          }
     }
}

```
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #11
    
 Quiz question Body What is the time complexity of accessing the nth element on an unsorted array?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #12
    
 Quiz question Body What is the time complexity of inserting at index n on an unsorted array?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #13
    
 Quiz question Body What is the time complexity of removing at index n in an unsorted array?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #14
    
 Quiz question Body What is the time complexity of searching for an element in an unsorted array of size n? 
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #15
    
 Quiz question Body What is the time complexity of setting a value at index n in an unsorted array?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #16
    
 Quiz question Body What is the time complexity of accessing the nth element of a singly linked list?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #17
    
 Quiz question Body What is the time complexity of inserting after the nth element of a singly linked list? (Assuming you have a pointer to the node to insert)
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #18
    
 Quiz question Body What is the time complexity of removing the nth element of a singly linked list? (Assuming you have a pointer to the node to remove)
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #19
    
 Quiz question Body What is the time complexity of searching for an element in a singly linked list of size n? 
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #20
    
 Quiz question Body What is the time complexity of setting the value of the nth element in a singly linked list? (Assuming you have a pointer to the node to set the value of)
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #21
    
 Quiz question Body What is the time complexity of accessing the nth element of a doubly linked list?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #22
    
 Quiz question Body Assuming you have a pointer to the node to insert, what is the time complexity of inserting after the nth element of a doubly linked list?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #23
    
 Quiz question Body Assuming you have a pointer to the node to remove, what is the time complexity of removing the nth element of a doubly linked list?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #24
    
 Quiz question Body What is the time complexity of searching for an element in a doubly linked list of size n?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #25
    
 Quiz question Body Assuming you have a pointer to the node to set the value of, what is the time complexity of setting the value of the nth element in a doubly linked list?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #26
    
 Quiz question Body What is the time complexity accessing the nth element in an unsorted Python 3 list?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #27
    
 Quiz question Body What is the time complexity of inserting into an unsorted Python 3 list at index n?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #28
    
 Quiz question Body What is the time complexity of removing at index n from an unsorted Python 3 list?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #29
    
 Quiz question Body What is the time complexity of searching for an element in an unsorted Python 3 list of size n?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #30
    
 Quiz question Body What is the time complexity of setting value at index n in an unsorted Python 3 list?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #31
    
 Quiz question Body What is the time complexity of the “push” operation onto a stack?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #32
    
 Quiz question Body What is the time complexity of the “pop” operation onto a stack?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #33
    
 Quiz question Body What is the time complexity of searching for an element in a stack of size n?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #34
    
 Quiz question Body What is the time complexity of “pushing” an element into a queue if you are given a pointer to both the head and the tail of the queue?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #35
    
 Quiz question Body What is the time complexity of “popping” an element in a queue if you are given a pointer to both the head and the tail of the queue?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #36
    
 Quiz question Body What is the time complexity of searching for an element in a queue of size n if you are given a pointer to both the head and the tail of the queue?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #37
    
 Quiz question Body What is the best case time complexity searching for an element in a hash table with the implementation you used during the previous Hash Table C project (chaining)?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #38
    
 Quiz question Body What is the time complexity of searching for an element - worst case - in a hash table with the implementation you used during the previous Hash Table C project (chaining)?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #39
    
 Quiz question Body What is the best case time complexity of insertion in a hash table with the implementation you used during the previous Hash Table C project (chaining)?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #40
    
 Quiz question Body What is the worst case time complexity of insertion in a hash table with the implementation you used during the previous Hash Table C project (chaining)?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #41
    
 Quiz question Body What is the time complexity of best case deletion from a hash table with the implementation you used during the previous Hash Table C project (chaining)?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips #### 
        
        Question #42
    
 Quiz question Body What is the time complexity of worst case deletion from a hash table with the implementation you used during the previous Hash Table C project (chaining)?
 Quiz question Answers * O(1)

* O(n)

* O(n!)

* O(n^2)

* O(log(n))

* O(nlog(n))

* O(2^n)

 Quiz question Tips ## Tasks
### 0. Bubble sort
          mandatory         Progress vs Score  Task Body 
Write a function that sorts an array of integers in ascending order using the  [Bubble sort](https://intranet.hbtn.io/rltoken/fCItpIfgmE07fFbHBUToeg) 
  algorithm
* Prototype:  ` void bubble_sort(int *array, size_t size); ` 
* You’re expected to print the  ` array `  after each time you swap two elements (See example below)
Write in the file   ` 0-O `  , the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case
```bash
alex@/tmp/sort$ cat 0-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
alex@/tmp/sort$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` sorting_algorithms ` 
* File:  ` 0-bubble_sort.c, 0-O ` 
 Self-paced manual review  Panel footer - Controls 
### 1. Insertion sort
          mandatory         Progress vs Score  Task Body 
Write a function that sorts a doubly linked list of integers in ascending order using the  [Insertion sort](https://intranet.hbtn.io/rltoken/4ueB1I1MkNypoTBXR0YX3g) 
  algorithm
* Prototype:  ` void insertion_sort_list(listint_t **list); ` 
* You are not allowed to modify the integer  ` n `  of a node. You have to swap the nodes themselves.
* You’re expected to print the  ` list `  after each time you swap two elements (See example below)
Write in the file   ` 1-O `  , the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case
```bash
alex@/tmp/sort$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
alex@/tmp/sort$ ./insertion
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 13, 71, 99, 52, 96, 73, 86, 7
19, 13, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 52, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 96, 99, 73, 86, 7
13, 19, 48, 52, 71, 96, 73, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 86, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 7, 99
13, 19, 48, 52, 71, 73, 86, 7, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$

```
 Task URLs  Github information Repo:
* GitHub repository:  ` sorting_algorithms ` 
* File:  ` 1-insertion_sort_list.c, 1-O ` 
 Self-paced manual review  Panel footer - Controls 
### 2. Selection sort
          mandatory         Progress vs Score  Task Body 
Write a function that sorts an array of integers in ascending order using the  [Selection sort](https://intranet.hbtn.io/rltoken/_DodgdySm5bPerpQm1LhwQ) 
  algorithm
* Prototype:  ` void selection_sort(int *array, size_t size); ` 
* You’re expected to print the  ` array `  after each time you swap two elements (See example below)
Write in the file   ` 2-O `  , the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case
```bash
alex@/tmp/sort$ cat 2-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 
2-main.c 2-selection_sort.c print_array.c -o select
alex@/tmp/sort$ ./select
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 73, 96, 86, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$

```
 Task URLs  Github information Repo:
* GitHub repository:  ` sorting_algorithms ` 
* File:  ` 2-selection_sort.c, 2-O ` 
 Self-paced manual review  Panel footer - Controls 
### 3. Quick sort
          mandatory         Progress vs Score  Task Body 
Write a function that sorts an array of integers in ascending order using the  [Quick sort](https://intranet.hbtn.io/rltoken/VoeZ2Hwp4Q0piTJ3OODY3w) 
  algorithm
* Prototype:  ` void quick_sort(int *array, size_t size); ` 
* You must implement the  ` Lomuto `  partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the  ` array `  after each time you swap two elements (See example below)
Write in the file   ` 3-O `  , the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
* in the best case
* in the average case
* in the worst case
```bash
alex@/tmp/sort$ cat 3-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
alex@/tmp/sort$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 73, 96, 86, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 48, 71, 52, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$

```
 Task URLs  Github information Repo:
* GitHub repository:  ` sorting_algorithms ` 
* File:  ` 3-quick_sort.c, 3-O ` 
 Self-paced manual review  Panel footer - Controls 
[Done with the mandatory tasks? Unlock 9 advanced tasks now!](https://intranet.hbtn.io/projects/248/unlock_optionals) 

×#### Recommended Sandbox
[Running only]() 
### 1 image(0/5 Sandboxes spawned)
### Ubuntu 20.04
Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Holberton Foundations
[Run]() 
