    /*
              $$$ PROBLEM STATEMENT $$$
 You have to input a five digit number and print the sum of digits of the number. 

                  *** INPUT ***
      The input contains a single five digit number, n.
      
                *** Output Format ***
     Print the sum of the digits of the five digit number.
      
  */    
#include<stdio.h>
int main()
{
    int a,b[5],i,j,s=0;
    scanf("%d",&a);
    i=10000;
    for(j=0;j<=4;j++)
    {
        
        b[j]=a/i;
        a=a%i;
        i=i/10;
    }
    for(i=0;i<=4;i++)
    {
        s=s+b[i];
    }
    printf("%d",s);
}
