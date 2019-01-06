#pragma once

namespace sorts
{

	/*거품정렬입니다.*/
	template <class BiDirectIterator>
	void bubble_sort
	(BiDirectIterator begin, BiDirectIterator end);

	template <class BiDirectIterator, class Comp>
	void bubble_sort
	(BiDirectIterator begin, BiDirectIterator end, Comp comparer);

	#include "bubble.h" /*구현입니다.*/



	/*선택정렬입니다.*/
	template <class BiDirectIterator>
	void selection_sort(BiDirectIterator begin, BiDirectIterator end);

	template <class BiDirectIterator, class Comp>
	void selection_sort(BiDirectIterator begin, BiDirectIterator end, Comp comparer);

	#include "selection.h" /*구현입니다.*/



	/*양방향 선택정렬입니다.*/
	template <class BiDirectIterator>
	void double_selection_sort(BiDirectIterator begin, BiDirectIterator end);

	template <class BiDirectIterator, class Comp>
	void double_selection_sort(BiDirectIterator begin, BiDirectIterator end, Comp comparer);

	#include "double_selection.h" /*구현입니다.*/



	/*퀵 정렬입니다.*/
	template <class RandomAccessIterator>
	void quick_sort(RandomAccessIterator begin, RandomAccessIterator end);

	template <class RandomAccessIterator, class Comp>
	void quick_sort(RandomAccessIterator begin, RandomAccessIterator end, Comp comparer);

	#include "quick.h" /*구현입니다.*/



	/*병합정렬입니다.*/
	template <class RandomAccessIterator>
	void merge_sort(RandomAccessIterator begin, RandomAccessIterator end);

	template <class RandomAccessIterator, class Comp>
	void merge_sort(RandomAccessIterator begin, RandomAccessIterator end, Comp comparer);

	#include "merge.h"



	/*계수정렬입니다.*/
	template <class Iterator, class UIntT, class Int>
	void counting_sort(Iterator begin, Iterator end, UIntT max, Int min = 0);

	#include "counting.h"
}
