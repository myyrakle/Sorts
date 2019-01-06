#pragma once

template <class BiDirectIterator>
void bubble_sort
(BiDirectIterator begin, BiDirectIterator end)
{
	--end;
	for (; begin != end; --end)
	{
		auto head = begin;
		auto tail = begin; ++tail;
		for (; head != end; ++head, ++tail)
			if (*head < *tail)
				continue;
			else
				std::swap(*head, *tail);
	}
}

template <class BiDirectIterator, class Comp>
void bubble_sort
(BiDirectIterator begin, BiDirectIterator end, Comp comparer)
{
	--end;
	for (; begin != end; --end)
	{
		auto head = begin;
		auto tail = begin; ++tail;
		for (; head != end; ++head, ++tail)
			if (comparer(*head, *tail))
				continue;
			else
				std::swap(*head, *tail);
	}
}