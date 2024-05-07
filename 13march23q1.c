#include <stdio.h>
int main()
{
    int num, ecount = 0, ocount = 0, lastdigit, i = 1;
    printf("Enter the five digit number - ");
    scanf("%d", &num);

    while (num != 0)
    {
        int lastdigit = num % 10;
        if (i % 2 == 0)
        {
            ecount += lastdigit;
        }
        else
        {
            ocount += lastdigit;
        }
        num = num / 10;
        i++;
    }
    printf("Even-%d\n", ecount);
    printf("Odd-%d", ocount);
}

#include<stdio.h>    
#include<stdlib.h>  

int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k; 
   
system("cls");  
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    

   
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}