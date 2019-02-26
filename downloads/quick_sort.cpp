#include <iostream>
using namespace std;
int a[100005],n;
void quicksort(int l,int r)
{
    if(l>=r) return ;//如果l>=r了，说明探测结束，直接返回
    int tmp=a[l];//基准数
    int i=l,j=r;//初始化！！！！！！！for烙下的病，写这个程序找bug找了好半会才发现呵呵哒
    while(i!=j)//我们俩没遇到的时候……
    {
        while(a[j]>=tmp&&i<j)
            j--;//小排开始走

        //顺序很重要，一定是小排先走哦
        while(a[i]<=tmp&&i<j)
            i++;//我也开始走了
        if(i<j) swap(a[i],a[j]);//乾坤大挪移
    }
    swap(a[l],a[i]);//交换基准数和我们脚下的数        
    quicksort(l,i-1);
    quicksort(i+1,r);
    return ;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    quicksort(1,n);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<' ';
    return 0;
}