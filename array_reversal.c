/*                    *** CHALLENGE ***  
   --> Given an array, of size n , reverse it.
Example: If array, arr = {1,2,3,4,5, after reversing it, the array should be,arr ={5,4,3,2,1} .
      
                  *** INPUT FORMAT ***
     -->  The first line contains an integer, n, denoting the size of the array. The next line 
     contains n space-separated integers denoting the elements of the array. 
     
                  *** OUTPUT FORMAT ***
     -->  The output is handled by the code given in the editor, which would print the array.
     
                  *** CONSTRAINTS ***
     -->  1 <= n <= 1000
     -->  1 <= arr[i] <=1000, where arr[i] is the i th element of the array.
     
                  *** SAMPLE INPUT ***
     -->  6
          16 13 7 2 1 12
          
                  *** SAMPLE OUTPUT ***
     -->  12 1 2 7 13 16
     
     
     
                    *** PROGRAM ***

*/

#include<stdio.h>
int main()
{
	int n;                 // Store the total number of elements in array here
	scanf("%d",&n);
	int arr[n];    		   // Declaration of array
	int i,temp,j;	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		//Scanning the elements of array.
	}
	j=n-1;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
