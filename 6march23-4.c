#include <stdio.h>

int main()
{
    float CGPA ; 

    enum gradepoints {D = 6,C = 7,B = 8,A = 9,S = 10};
    enum gradepoints garde ;
    
    CGPA = (float) (3*S + 3*A + 3*A)/9 ;
    printf("Your this sem CGPA is %f " , CGPA);
    return 0 ;
}