template <class InputIterator1, class InputIterator2, class OutputIterator>
  OutputIterator set_union (InputIterator1 first1, InputIterator1 last1,
                            InputIterator2 first2, InputIterator2 last2,
                            OutputIterator result)
{
  while (true)
  {
    if (first1==last1) return std::copy(first2,last2,result);
    if (first2==last2) return std::copy(first1,last1,result);

    if (*first1<*first2) { *result = *first1; ++first1; }
    else if (*first2<*first1) { *result = *first2; ++first2; }
    else { *result = *first1; ++first1; ++first2; }
    ++result;
  }
}