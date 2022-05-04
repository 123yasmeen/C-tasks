#include <stdio.h>
struct grade
{
int ds;
int programming;
int maths;
int algorithms;
};
int search(int arr[],int id)
{
    int low=0;
    int high=9;
    while (low <= high)
    {
        int mid = low+(high-low)/2;
        int i=arr[mid];
        if(i==id)
            return mid;
        if(i>id)
            high=mid-1;
        if(i<id)
            low=mid+1;
    }
    return -1;
}
int main() {
struct grade s[10]={{70,80,75,67},{23,45,67,87},{56,78,67,56},{56,77,88,90},{80,76,66,90},{34,35,45,60},{90,89,95,85},{66,76,54,78},{54,33,56,78},{56,45,67,56}};
int id;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("enter your id\n");
    scanf("%d",&id);
    int position= search(arr,id);
    if(position==-1)
    {
        printf("enter a correct id");
    }
    else
    {
    printf("the grades:%d %d %d %d",s[position].ds,s[position].programming,s[position].maths,s[position].algorithms);
    }

    return 0;
}

