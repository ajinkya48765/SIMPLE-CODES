  /*
                    *** About Bitwise Operators ***
              
      Inside the CPU, mathematical operations like addition, subtraction,
  multiplication and division are done in bit-level. 
      To perform bit-level operations in C programming, bitwise operators
  are used which are explained below.
  
  -->  Bitwise AND operator & The output of bitwise AND is 1 if the 
  corresponding bits of two operands is 1. If either bit of an operand is 0, the 
  result of corresponding bit is evaluated to 0. It is denoted by &.
  
  -->  Bitwise OR operator | The output of bitwise OR is 1 if at least one 
  corresponding bit of two operands is 1. It is denoted by |.
  
  -->   Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator 
  is 1 if the corresponding bits of two operands are opposite. 

                *** PROBLEM STATEMENT ***
                
Given set S={1,2,3,...,n}, find:

-->  the maximum value of a&b which is less than a given integer k,
where a and b (where a<b) are two integers from set S.

-->  the maximum value of a|b which is less than a given integer k,
where a and b (where a<b) are two integers from set S.

-->  the maximum value of a^b which is less than a give n integer k,
where a and b (where a<b) are two integers from set S.

                *** INPUT FORM ***
The only line contains 2 space-separated integers, n and k, respectively.

                *** OUTPUT FORM ***  
The first line of output contains the maximum possible value of a&b.

The second line of output contains the maximum possible value of a|b.

The second line of output contains the maximum possible value of a^b.

                *** SAMPLE INPUT ***
         5 4
         
                *** SAMPLE OUTPUT ***
                
                2
                3
                3
                
                *** EXPLAINATION ***
                
          n=5 ,k=4,  S={1,2,3,4,5}
          
          All possible values of a and b are :
          
          (1)  a=1, b=2 ; a&b=0 ; a|b=3 ; a^b=3 ;
          (2)  a=1, b=3 ; a&b=1 ; a|b=3 ; a^b=2 ;
          (3)  a=1, b=4 ; a&b=0 ; a|b=5 ; a^b=5 ;
          (4)  a=1, b=5 ; a&b=1 ; a|b=5 ; a^b=4 ;
          (5)  a=2, b=3 ; a&b=2 ; a|b=3 ; a^b=1 ;
          (6)  a=2, b=4 ; a&b=0 ; a|b=6 ; a^b=6 ;
          (7)  a=2, b=5 ; a&b=0 ; a|b=7 ; a^b=7 ;
          (8)  a=3, b=4 ; a&b=0 ; a|b=7 ; a^b=7 ;
          (9)  a=3, b=5 ; a&b=1 ; a|b=7 ; a^b=6 ;
          (10) a=4, b=5 ; a&b=4 ; a|b=5 ; a^b=1 ;
          
       -->  The maximum possible value of a&b that is  also < (k=4) is 2 , so we
       print 2 on first line.
       
       -->  The maximum possible value of a|b that is  also < (k=4) is 3 , so we
       print 3 on second line.
       
       -->  The maximum possible value of a^b that is also < (k=4) is 3 , so we
       print 3 on third line.
       
*/


//                  *** SOLUTION ***

#include<stdio.h>
int main()
{
	int n,k,i,j,a=0,c,x=2;
	scanf("%d %d",&n,&k);

	for(i=1;i<=n-1;i++)
	{
		for(j=x;j<=n;j++)
		{
			c=i&j;
			if(a<c && c<k)
				a=c;
		}
		x++;
		
	}
	printf("%d\n",a);
	
	a=0;
	x=2;

	for(i=1;i<=n-1;i++)
	{
		for(j=x;j<=n;j++)
		{
			c=i|j;
			if(a<c && c<k)
				a=c;
		}
		x++;
		
	}
	printf("%d\n",a);

	a=0;
	x=2;
	
	for(i=1;i<=n-1;i++)
	{
		for(j=x;j<=n;j++)
		{
			c=i^j;
			if(a<c && c<k)
				a=c;
		}
		x++;
		
	}
	printf("%d\n",a);
}
