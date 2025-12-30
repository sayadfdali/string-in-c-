#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    char sec;
    int marks;
};
int main()
{
    int N;
    cin >> N;
    // int a[5];
    Student a[N];
    for(int i=0;i<N;i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].sec >> a[i].marks;
    }
        for (int i=0;i<N/2;i++) 
    {
        char temp = a[i].sec;
        a[i].sec = a[N - 1 - i].sec;
        a[N - 1 - i].sec = temp;
    }
        for(int i=0;i<N;i++)
    {
        cout <<  a[i].name << " " << a[i].roll << " "<< a[i].sec << " " << a[i].marks << " " << endl;
    }
    return 0;
}