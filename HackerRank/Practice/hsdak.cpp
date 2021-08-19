#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> grades;
    vector<int> gradesUP;

    grades.push_back(5);
    grades.push_back(43);
    grades.push_back(72);
    grades.push_back(64);

    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] > 37)
        {
            if (grades[i] % 5 >= 3)
            {
                int a, b;
                a = grades[i] / 5;
                b = (a + 1) * 5;
                gradesUP.push_back(b);
            }
            else
            gradesUP.push_back(grades[i]);

        }
    }
    for (int i = 0; i < gradesUP.size() ; i++)
    {
        cout<<gradesUP[i]<<endl ;
    }
    
    return 0;
}