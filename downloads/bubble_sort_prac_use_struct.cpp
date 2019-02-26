#include <iostream>
using namespace std;
struct students
{
    string name;
    int score;
}a[10];//定义结构体
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i].name>>a[i].score;
    for(int i=1;i<=n-1;i++)
        for(int j=1;j<=n-i;j++)
            if(a[j].score>a[j+1].score)
                swap(a[j],a[j+1]);//直接一起swap
    for(int i=1;i<=n;i++)
        cout<<a[i].name<<endl;
    return 0;
}