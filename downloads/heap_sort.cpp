#include <iostream>
using namespace std;
int n,a[10];
//a是待排序的数组
//start是从数组的哪个位置开始构建堆
//end则是从数组的哪个位置，后面的不截了
void maxheap(int *a,int start,int end)
{
    int cur=start;//当前遍历到了哪个节点
    int l=2*start+1;//左儿子位置
    int tmp=a[start];//当前节点大小
    for(;l<=end;cur=l,l=l*2+1)//l一直到end，每一次都对子节点着想
    {
 
        //l是左儿子，r是右儿子
        if(l<end&&a[l]<a[l+1])
            l++;
        //如果右儿子更好，去取右儿子
        if(tmp>=a[l])
            break;
        else
        {
            a[cur]=a[l];
            a[l]=tmp;
        }
        //如果已经满足了要求，调整结束
        //否则进行交换
    }
}
void heapsort(int *a,int n)
{
    for(int i=n/2-1;i>=0;i--)
        maxheap(a,i,n-1);
    //进行最初的step 1，将无序序列变成堆
    for(int i=n-1;i>0;i--)
    {
        swap(a[0],a[i]);//交换堆顶和末尾
        maxheap(a,0,i-1);//重新建造堆
    }
    return ;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    heapsort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    return 0;
}