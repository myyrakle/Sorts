#pragma once

#include <utility>

template <class BiDirectIterator>
void insertion_sort(BiDirectIterator begin, BiDirectIterator end)
{
	BiDirectIterator go = begin;

	for (++go; go!=end; go++)
	{
		auto mover = std::move(*go); //이동될 값

		BiDirectIterator go_back = go; //역순 진행할 반복자

		//역순 조사
		for (go_back--; go_back!=begin && mover < *go_back; go_back--)
		{
			BiDirectIterator a_step = go_back;
			a_step++;
			*a_step = std::move(*go_back); //오른쪽으로 밀어냄
		}

		//begin일때 처리
		if (mover < *go_back)
		{
			BiDirectIterator a_step = go_back;
			a_step++;
			*a_step = std::move(*go_back);
		}
		else
			go_back++;

		*go_back = std::move(mover);
	}
}

template <class BiDirectIterator, class Comp>
void insertion_sort(BiDirectIterator begin, BiDirectIterator end, Comp comparer)
{
	BiDirectIterator go = begin;

	for (++go; go != end; go++)
	{
		auto mover = std::move(*go); //이동될 값

		BiDirectIterator go_back = go; //역순 진행할 반복자

		//역순 조사
		for (go_back--; go_back != begin && comparer(mover,*go_back); go_back--)
		{
			BiDirectIterator a_step = go_back;
			a_step++;
			*a_step = std::move(*go_back); //오른쪽으로 밀어냄
		}

		//begin일때 처리
		if (comparer(mover, *go_back))
		{
			BiDirectIterator a_step = go_back;
			a_step++;
			*a_step = std::move(*go_back);
		}
		else
			go_back++;

		*go_back = std::move(mover);
	}
}
