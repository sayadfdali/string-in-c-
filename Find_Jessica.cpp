#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);   

    string word;
    stringstream ss(S);

    while (ss >> word) 
    {
        if (word == "Jessica") 
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}