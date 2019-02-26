#include <iostream>
#include <cstdio>
using namespace std;
int a[100],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    //以上都是读入，这里不再赘述了。
    for(int i=1;i<=n-1;i++)//n个数排序进行n-1次即可
        for(int j=1;j<=n-i;j++)//后面的数已经冒完泡，归完位了。
            if(a[j]>a[j+1])//如果顺序错误
                swap(a[j],a[j+1]);//交换
    for(int i=1;i<=n;i++)
        cout<<a[i]<<' ';
    return 0;
}