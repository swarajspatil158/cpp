#include <iostream>
using namespace std;

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int arr1[5] = {1, 2, 3, 4, 5};
  for (auto it : arr1)
    cout << it << " ";
  cout << endl;

  int arr2[5] = {1, 2, 3};
  for (auto it : arr2)
    cout << it << " ";
  cout << endl;

  arr2[3] = 4;
  arr2[4] = 5;
  for (auto it : arr2)
    cout << it << " ";
  cout << endl;

  cout << arr2[2] << endl;
  // error: too many initializers
  // int arr[2] = {1,2,3,4,5};

  return 0;
}