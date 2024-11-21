#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min_number_operation=0;
        cin >> n;
        char str[n+1];

        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        str[n] = '\0'; 
       for (int i = 0; i < n-1; i++)
        {
            if(str[i] == str[i+1]){
                min_number_operation++;
            };
        }
        cout<<min_number_operation << endl;
    }
    return 0;
}