
/*                    *** CHALLENGE ***  
   --> Given a string, s, consisting of alphabets and digits, 
       find the frequency of each digit in the given string.
      
                  *** INPUT FORMAT ***
     -->  The first line contains a string, num which is the given number.
     
                  *** OUTPUT FORMAT ***
     -->  Print ten space-separated integers in a single line denoting the
          frequency of each digit from 0 to 9.
          
                  *** CONSTRAINTS ***
     -->  1 <= len(num) <=1000.
     
                  *** SAMPLE INPUT ***
     -->  a11472o5t6
          
                  *** SAMPLE OUTPUT ***
     -->  0 2 1 0 1 1 1 1 0 0
     
     
     
                    *** PROGRAM ***
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[1000];
	int i;
	scanf("%[^\n]c",arr);
	int iptr[10]={0,0,0,0,0,0,0,0,0,0};
	for(i=0;i<strlen(arr);i++)
	{
		if(arr[i]=='0')
			iptr[0]++;
		else if(arr[i]=='1')
			iptr[1]++;
		else if(arr[i]=='2')
			iptr[2]++;
		else if(arr[i]=='3')
					iptr[3]++;

		else if(arr[i]=='4')
					iptr[4]++;

		else if(arr[i]=='5')
					iptr[5]++;

		else if(arr[i]=='6')
					iptr[6]++;

		else if(arr[i]=='7')
					iptr[7]++;

		else if(arr[i]=='8')
					iptr[8]++;

		else if(arr[i]=='9')
					iptr[9]++;
	}

	for(i=0;i<10;i++)
		printf("%d ",iptr[i]);
}
