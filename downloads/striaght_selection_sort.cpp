#include <iostream>
using namespace std;
int a[10],n,minnum;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        minnum=i;//minnum用来存第i小的数的下标
        //也就是一会谁来跟a[i]换
        //当然默认是不换的，所以初始化为i
        for(int j=i;j<=n;j++)//j向后遍历
        {
            if(a[minnum]>a[j])
                minnum=j;
            //如果发现有比a[i]小的，就先更新
            //为什么不能直接swap？万一后面还有更小的？
        }
        swap(a[minnum],a[i]);//交换
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<' ';
    return 0;
}