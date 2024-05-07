#include <stdio.h>

int sexornot(char naam[] ,int umar)
{
    if (umar >= 18)
    {
        return 1 ;
    }

    else 
    {
        return 0 ; 
    }

}

void sexwith2()
{
    char desire[1000] ;
    int n ;

    printf("Enter ur lusty desires for threesome : ");
    gets(desire) ;

    printf("So ur desire is as follows\n%s\nHere is how we can help uhh", desire );

    printf(" 1.get the girl\n2.get the room" );
    printf("%d\n",n );

    switch (n)
    {
    case 1:
        printf("Okay we will get girls for you\n" );
        break;

    case 2:
        printf("Seems u have girls....!!!so we will get the room\n" );
        break;

    default:
        break;
    }
}
 
int main()
{
    int age,numpartner;
    char name[100] ;
 
    printf("Enter the name : ");
    gets(name) ;
    // printf("Entered name is : %s\n",name );

    printf("Enter the age : ");
    scanf("%d",&age );

    if (sexornot(name,age))
    {
        printf("Yaah sex....!!!! coz u r %d\n",age );
    }
    else 
    {
        printf("Naah.....No sex....!!!! coz u r %d\n",age );
    }
 
    while(sexornot(name,age)==1);
    {
        printf("Enter the number of partners you want : ");
        scanf("%d",&numpartner );
        
        switch (numpartner)
        {
        case 1 :
            printf("Geez, ur commited as fuck...!! \nIf u ever wanted more , then we can help\n" );
            break;

        case 2 :
            printf("Umm, u r naughy as fuck!!" );
            sexwith2();
            break;

        case 3 :
            printf("Uff, u r more than naughy!!\nSorry but we donot provide such foursome service\n" );
            break;
        
        default:
            printf("You are hoping for orgy but that is not what the girls would like to have, so sorry man\n");
            break;
        }

    }

    
 
    return 0;
}