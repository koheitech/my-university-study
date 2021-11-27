# include <iostream>
using namespace std;
double Series(int);

int main()
{
  int n = 10;
  for(int i=1; i<=n; i++)
    cout << "i= " << i << ": " << Series(i) << endl;;
  return 0;
}

double Series(int n)
{
  if(n==1)
    return 1;
  return 1.0/n + Series(n-1);
}
