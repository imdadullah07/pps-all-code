 #include<stdio.h>
 int main()
 {
    int arr[10],n,i;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%",&arr[i]);
    printf("element:");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
 }
