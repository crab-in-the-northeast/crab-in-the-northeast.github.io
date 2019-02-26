#include <iostream>
#include <cstdio>
using namespace std;
int a[10005];//假设数列中最大值为10000，防爆+5.
int n;
int main()
{
  cin>>n;   //一共有多少个数？
  for(int i=0;i<n;i++)
  {
    int k;
    cin>>k;//输入当前的值
    a[k]++;//对应位置自增
  }
  for(int i=0;i<=10005;i++)
    if(a[i])//如果存在这个数
      for(int j=1;j<=a[i];j++)//输出多少次呢？
        cout<<i<<' ';//输出这个数
  return 0;
}