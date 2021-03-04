/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>  
  
int main()  
{  
    float s1, s2, s3, s4, s5, per;  
  
    printf("Enter marks of 5 subject\n");  
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);  
  
    per = (s1 + s2 + s3 + s4 + s5) / 5.0;  
  
    if(per >= 60)  
    {  
        printf("Grade A\n");  
    }  
    else  
    {  
        if(per >= 50)  
        {  
            printf("Grade B\n");  
        }  
        else  
        {  
            if(per >= 40)  
            {  
                printf("Grade C\n");  
            }  
            else  
            {  
                printf("Failed!\n");  
            }  
        }  
    }  
  
    return 0;  
}