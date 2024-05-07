// #include <stdio.h>
// int f(int arr[])
// {
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("Size of the array is %d", size);
//     return size;
// }

// int main() 
// {
//    int arr[10],i,n,y;
//    printf("Enter value of N: ");
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//         printf("Enter %d Element\n",i+1);
//         scanf("%d",&arr[i]);
//    }
    
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("Size of the array is %d\n", size);
//    y=f(arr);   
//    return 0;
// }


#include <stdio.h>

int f(int arr[], int n)
{
    int size = n;
    printf("Size of the array is %d\n", size);
    return size;
}

int main() {
   int arr[100],i,n,y;
   printf("Enter value of N: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&arr[i]);
   }
   y=f(arr,n);
   printf("\nY= %d\n",y);
   
   return 0;
}