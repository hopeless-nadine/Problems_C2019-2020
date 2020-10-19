#include <iostream>
using namespace std;

int signx (int x)
{
if (x > 0)
{
return 1;
}
else if (x==0)
{
return 0;
}
else
{
return -1;
}
}
int main()
{
int a;
cout << "Enter x ";
cin >> a;
cout << signx (a);
}

