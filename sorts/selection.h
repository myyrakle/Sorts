#pragma once


template <class BiDirectIterator>
void selection_sort(BiDirectIterator begin, BiDirectIterator end)
{
	--end;
	for (; begin != end; --end)
	{
		auto max_iterator = begin;
		auto i = begin; ++i;
		for (; i != end; ++i)
		{
			if (*i < *max_iterator)
				continue;
			else
				max_iterator = i;
		}

		std::swap(*max_iterator, *end);
	}
}

template <class BiDirectIterator, class Comp>
void selection_sort(BiDirectIterator begin, BiDirectIterator end, Comp comparer)
{
	--end;
	for (; begin != end; --end)
	{
		auto max_iterator = begin;
		auto i = begin; ++i;
		for (; i != end; ++i)
		{
			if (comparer(*i, *max_iterator))
				continue;
			else
				max_iterator = i;
		}

		std::swap(*max_iterator, *end);
	}
}