/*
 * sorting.h
 *
 *  Created on: Aug 30, 2015
 *      Author: owner
 */

#ifndef SORTING_H_
#define SORTING_H_


#include "BinaryHeap.h"
#include "BubbleSort.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "QuickSortWith3Waypartitioning.h"
#include "ShellSort.h"

class sorting:
		public BinaryHeap,
		public BubbleSort,
		public insertionSort,
		public mergeSort,
		public quickSort,
		public QuickSortWith3Waypartitioning,
		public selectionSort,
		public ShellSort
{
public:
	sorting();
	virtual ~sorting();
};

#endif /* SORTING_H_ */
