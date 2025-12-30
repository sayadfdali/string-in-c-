#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};
int main()
{
    int N;
    cin >> N;
    // int a[5];
    Student a[N];
    
    for(int i=0;i<N;i++)
    {
        cin >> a[i].nm >> a[i].cls >>a[i].s>> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;
    }

    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(a[j].total_marks < a[j+1].total_marks || a[j].total_marks == a[j+1].total_marks && a[j].id > a[j+1].id)
            {
                Student temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    


        for(int i=0;i<N;i++)
    {
        cout <<  a[i].nm << " "<< a[i].cls << " "<< a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}