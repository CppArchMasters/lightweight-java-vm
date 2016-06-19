/*
 * sort.c
 *
 *  Created on: 17 kwi 2016
 *      Author: zabkiewi
 */

#include "sort.h"

/* quick sort */
void sort(
		void * structure, 		/* structure to be sorted */
		void * comparator,		/* pointer to comparator function */
		uint32 elem_size,		/* size of single element of data structure */
		uint32 elem_count,		/* quantity of elements in the sorted structure */
		uint32 max_size,		/* size of all elements, boundary checks */
		uint32 structure_size	/* whole structure size */
		) {}

/* insert sort */
void insert_sort(
		void * structure,		/* structure to be sorted */
		void * comparator,		/* pointer to comparator function */
		uint32 elem_size,		/*size of single element */
		uint32 elem_count,		/* quantity of elements */
		uint32 max_size,		/* size of all elements */
		uint32 structure_size	/* size of the structure */
		) {}
