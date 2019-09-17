#pragma once

template <class BiDirectIterator>
void smart_bubble_sort(BiDirectIterator begin, BiDirectIterator end)
{
	--end;
	for (;begin != end; --end)
	{
		bool swap_flag = false;

		auto head = begin;
		auto tail = begin; ++tail;

		for (;head != end; ++head, ++tail)
			if (*head < *tail)
				continue;
			else
			{
				std::swap(*head, *tail);
				swap_flag = true;
			}

		if (swap_flag == false)
			break;
	}
}

template <class BiDirectIterator, class Comp>
void smart_bubble_sort(BiDirectIterator begin, BiDirectIterator end, Comp comparer)
{
	--end;
	for (; begin != end; --end)
	{
		bool swap_flag = false;

		auto head = begin;
		auto tail = begin; ++tail;
		for (; head != end; ++head, ++tail)
			if (comparer(*head, *tail))
				continue;
			else
			{
				std::swap(*head, *tail);
				swap_flag = true;
			}

		if (swap_flag == false)
			break;
	}
}
