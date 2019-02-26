#include <iostream>
using namespace std;
int score[10],n;
string name[10];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>name[i]>>score[i];
    for(int i=1;i<=n-1;i++)
        for(int j=1;j<=n-i;j++)
            if(score[j]>score[j+1])
            {
                swap(score[j],score[j+1]);
                swap(name[j],name[j+1]);
                //这里可以同步swap，来实现名字也交换的目的。
            }
    for(int i=1;i<=n;i++)
        cout<<name[i]<<endl;
    return 0;
}