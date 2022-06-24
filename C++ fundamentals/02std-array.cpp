#include <iostream>
#include <algorithm>
#include <array>
int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  // construction uses aggregate initialization
  // double-braces required
  std::array<int, 5> ar1{{3, 4, 5, 1, 2}};
  std::array<int, 5> ar2 = {1, 2, 3, 4, 5};
  std::array<std::string, 2> ar3 = {"a", "b"};

  std::cout << "Sizes of arrays are" << std::endl;
  std::cout << ar1.size() << '\n';
  std::cout << ar2.size() << '\n';
  std::cout << ar3.size() << '\n';

  std::cout << "\nInitial ar1 : ";
  for (auto i : ar1)
    std::cout << i << ' ';

  // container operations are supported
  std::sort(ar1.begin(), ar1.end());

  std::cout << "\nsorted ar1 : ";
  for (auto i : ar1)
    std::cout << i << ' ';

  // Filling ar2 with 10
  ar2.fill(10);

  std::cout << "\nFilled ar2 : ";
  for (auto i : ar2)
    std::cout << i << ' ';

  // ranged for loop is supported
  std::cout << "\nar3 : ";
  for (auto &s : ar3)
    std::cout << s << ' ';
  return 0;
}