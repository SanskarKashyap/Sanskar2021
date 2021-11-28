#include <bits/stdc++.h> 
using namespace std;

class Time
{
int Hr; int Min;

public:
Time()
{
Hr = 0;
Min = 0;
}
Time(int r, int i)
{
Hr = r; Min = i;
}
bool operator==(Time c)
{
if (Hr == c.Hr && Min == c.Min)
 
return true;
else
return false;
}
};


int main()
{
Time t1(1, 2), t2(1, 2); if (t1 == t2)
cout << "Equal"; else
cout << "Unequal"; return 0;
}
