#pragma once


template <class BiDirectIterator>
void double_selection_sort(BiDirectIterator begin, BiDirectIterator end)
{
	--end;
	while (true)
	{
		auto min_iterator = begin;
		auto max_iterator = begin;
		auto i = begin;
		while (i != end)
		{
			++i;
			if (*i < *min_iterator)
				min_iterator = i;
			else if (*i > *max_iterator)
				max_iterator = i;
		}

		std::swap(*min_iterator, *begin);
		if (*begin != *max_iterator)
			std::swap(*max_iterator, *end);

		--end;
		if (begin == end) //요소가 홀수인 경우임
			break;

		++begin;
		if (begin == end)
			break;
	}
}

template <class BiDirectIterator, class Comp>
void double_selection_sort(BiDirectIterator begin, BiDirectIterator end, Comp comparer)
{
	--end;
	while (true)
	{
		auto min_iterator = begin;
		auto max_iterator = begin;
		auto i = begin;
		while (i != end)
		{
			++i;
			if (!comparer(*i, *min_iterator))
				min_iterator = i;
			else if (comparer(*i, *max_iterator))
				max_iterator = i;
		}

		std::swap(*min_iterator, *begin);
		if (*begin != *max_iterator)
			std::swap(*max_iterator, *end);

		--end;
		if (begin == end) //요소가 홀수인 경우임
			break;

		++begin;
		if (begin == end)
			break;
	}
}