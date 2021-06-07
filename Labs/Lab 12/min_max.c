#include<stdio.h>
#include<limits.h>
void findIndices(int arr[],int n,int ans[],int *n_of_ans,int element)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            *(ans+k)=i;
            k++;
        }
    }
    *n_of_ans=k;
}
void max_min(int arr[],int n,int *min,int *max)
{
    int maxx=INT_MIN,minn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minn)
            minn=arr[i];
        else
            maxx=arr[i];
    }
    *min=minn;
    *max=maxx;
}
int main()
{
    int i,j,n;
    int max,min,no_of_min,no_of_max;
    int arr[20],occurencesOfMin[20],occurencesOfMax[20];
    printf("Enter the count of numbers: ");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max_min(arr,n,&min,&max);
    findIndices(arr,n,occurencesOfMax,&no_of_max,max);
    findIndices(arr,n,occurencesOfMin,&no_of_min,min);
    printf("Max: %d occurs at Index: ",max);
    for(int i=0;i<no_of_max;i++)
        printf("%d ",occurencesOfMax[i]);
    printf("\n");
    printf("Min: %d occurs at Index: ",min);
    for(int i=0;i<no_of_min;i++)
        printf("%d ",occurencesOfMin[i]);
    printf("\n");
    return 0;
}