   /*
   
                         *** PROBLEM STATEMENT ***
                         
               -->  In this problem, you need to print the
               pattern of the following form containing the numbers from 1 to 50 . 
                            
                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
                         
                         
                            *** INPUT FORMAT ***
            --> The input will contain a single integer n. 

                            *** OUTPUT FORMAT ***
            --> Print the pattern mentioned in the problem statement. 
      
      
*/
#include<stdio.h>
int main()
{
	int n,max;
		int sq[50][50];				//square matrix is declared here

		scanf("%d",&n);
		max=n*2-2;              	//we Bounding the rows and columns here
		int i=0,j=0;				//variables i and j are for running loops where 	i is for row and j for column.
		int z=max;					//variable 'z' is to give last value the inner loop;
		int y=0;					//variable 'y' is to give first value of the inner loop;
		int flag=0; 				
		int m=n;					//variable 'm' is used in the second for loop in place of 'n', as I changed the value of 'n' in first for loop.
		

		for(i=0;i<=max;i++)			//This loop traverses the rows to print upper and lower number triangle;
		{
			if(flag==0)
			{
				j=y;
				for(j;j<=z;j++)
				{
					sq[i][j]=n;
				}
				if(n==1)
				{
					flag=1;
					continue;
				}
				n--;
				y++;
				z--;	
			}
			if(flag==1)
			{
				n++;
				z++;
				j=--y;
				for(j;j<=z;j++)
				{
					sq[i][j]=n;
				}
			}
		}

		i=1;							// Before proceeding ahead we have to restore the following values;
		j=0;
		z=max-1;
		y=0;


		for(j=0;j<=max;j++)				//This loop is to traverse columns to fill blank spaces;
		{
			i=y;
			if(j<=max/2)
			{
				for(i;i<=z;i++)
				{
					sq[i][j]=m;
				}
				if(j==max/2)
				{
					continue;
				}
				y++;
				z--;
				m--;
			}

			else if(j>max/2)
			{
				m++;
				z++;
				i=--y;
				for(i;i<=z;i++)
				{
					sq[i][j]=m;
				}
			}
		}

	//Following Loop will print the matrix elements;
		for(i=0;i<=max;i++)
		{
			for(j=0;j<=max;j++)
			{
				printf("%d",sq[i][j]);
			}
			if (i==max)
				continue;
			printf("\n");
		}

}
