#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/** functions used to create singly linked list*/
listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);

/** functions used to create singly skip list*/
void init_express(skiplist_t *list, size_t size);
void free_skiplist(skiplist_t *list);
void print_skiplist(const skiplist_t *list);

/** linear seach algorithm*/
int linear_search(int *array, size_t size, int value);

/** binary search algorithm*/
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int start, int end);

/** jump search algorithm*/
int jump_search(int *array, size_t size, int value);
int linear_search_for_jump(int *array, size_t start, size_t end, int value);

/** interpolation search algorithm*/
int interpolation_search(int *array, size_t size, int value);

/** recursive binary search*/
int advanced_binary(int *array, size_t size, int value);
int binary_search_recursive(int *array, int low, int high, int value);

/** exponential search algorithm*/
int exponential_search(int *array, size_t size, int value);
int min(int first_num, int second_num);
int binary_search_for_exponenial(int *array, int low, int high, int value);

/** jump search algorithm for singly linked list*/
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *search_list(listint_t *start, listint_t *end, int value);

/** search algorithm for singly skiplist*/
skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *search_skiplist(skiplist_t *start, skiplist_t *end, int value);

#endif
