#include <iostream>
#include <vector>
using namespace std;
int getlen(int n)//获取一个数的长度
{
    int ret=0;
    while(n)
    {
        n/=10;//n不断除以10
        ret++;
    }
    return ret;
}
vector<int> bucket[10];//用了STL
int n,a[10],tmp[10],maxlen,bk,divpos=1;
//有n个数，第i个数是a[i]，tmp是临时数组
//maxlen是数组中最大数的长度，bk是数组下标的遍历
//divpos用来变化求一个数的每一位
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxlen=max(maxlen,getlen(a[i]));
    }
    //以上都是读入
    while(maxlen--)
    {
        for(int i=0;i<10;i++)
            bucket[i].clear();//初始化
        for(int i=0;i<n;i++)
            bucket[a[i]/divpos%10].push_back(a[i]);//将数扔进对应的桶
        for(int i=0;i<10;i++)
        {
            vector<int>::iterator iter=bucket[i].begin();
            for(;iter!=bucket[i].end();iter++)
                tmp[bk++]=(*iter);
            //用iterator遍历，把这些数再重新取出
        }
        bk=0;//初始化下标遍历变量bk
        for(int i=0;i<n;i++)//将临时数组赋值到a数组
            a[i]=tmp[i];
        divpos*=10;//变化divpos求出下一位
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';//输出
    return 0;
}