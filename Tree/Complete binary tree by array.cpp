#include<bits/stdc++.h>
using namespace std;
int a[100],n,i;
void preOrder(int i)
{
        printf("%d ",a[i]);
        if(a[i*2+1]!=-1)
            preOrder(i*2+1);
        if(a[i*2+2]!=-1)
            preOrder(i*2+2);
}

void inOrder(int i)
{
        printf("%d ",a[i]);
        if(a[i*2+1]!=-1)
            inOrder(i*2+1);
        printf("%d ",a[i]);
        if(a[i*2+2]!=-1)
            inOrder(i*2+2);
}

int main()
{
    for(i=0;i<100;i++)
        a[i]=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];  /// 1 2 3 4 5 6 7 8 9 10
    }
//    for(i=0;i<n;i++)
//    {
//        cout<<a[i]<<endl;  /// 1 2 3 4 5 6 7 8 9 10
//    }
    preOrder(0);



}
