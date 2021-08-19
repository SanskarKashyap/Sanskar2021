#include <bits/stdc++.h>

using namespace std;



int findShortestSubstring(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int k;
        k++;
        for (int j = k; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                cout <<i <<j <<endl ; 
                count++;
                s.erase(j,1);
                 
            }
        }
    }
     cout << s ; 
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = findShortestSubstring(s);

    cout << result << "\n";
   

    fout.close();

    return 0;
}
