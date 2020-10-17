// C++ program to demonstrate generate function in STL
#include <bits/stdc++.h>
using namespace std;

// function to generate random numbers in range [0-999] :
int randomize()
{
    return (rand() % 1000);
}

int main ()
{
  // for different values each time we run the code
  srand(time(NULL));

  vector<int> vect(10); // declaring the vector

  // Fill all elements using randomize()
  generate(vect.begin(), vect.end(), randomize);

  // displaying the content of vector
  for (int i=0; i<vect.size(); i++)
     cout << vect[i] << " " ;

  return 0;
}
