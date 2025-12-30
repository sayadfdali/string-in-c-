#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T; 
    string S, X;
    // char has = '#';
    cin >> S >> X >>;
    S.find(X,'#');
    S.replace(X, '#');
    cout << S << endl;
    return 0;
}