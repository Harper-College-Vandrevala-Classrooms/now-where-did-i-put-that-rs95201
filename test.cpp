#include <cassert>
#include <iostream>
#include "find.hpp"

int main()
{
  assert(1 == find("hello, how are you", 'e'));
  assert(15 == find("hello, how are you", "you"));
  assert(6 == find("hello, how are you", ' '));

  assert(2 == find("The quick brown fox",'e'));
  assert(2 == find("The quick brown fox","e"));
  assert(3 == find("The quick brown fox",' '));

  assert(4 == find("The quick brown fox","quick"));
  assert(-1 == find("The quick brown fox","quiet"));

  std::cout << "Test finished successfully";
  return 0;
}
