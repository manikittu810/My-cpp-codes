#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    double sum=0.0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    sum=sum/n;
    printf("%.12lf\n",sum);
    return 0;
}