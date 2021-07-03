#include<stdio.h>
int partition(int a[],int l,int h)
{
    int pivot,j,i;
    pivot=a[h];
    i=l-1;
    for(j=l;j<h;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            a[i]=a[j];
        }
    }
    a[i+1]=a[h];
    return i+1;
}
void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int p;
        p=partition(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
