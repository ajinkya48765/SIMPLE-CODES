/*
MEDEL
You are given a sequence A1,A2,…,AN of distinct integers. While the sequence 
contains at least three elements, look at its first three elements, find 
the median among these elements and delete it. What will the final sequence be?

Input
The first line of the input contains a single integer T denoting the number
of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.

Output
For each test case, print a single line containing K space-separated integers,
where K is the length of the final sequence. For each valid i, the i-th of 
these integers should be the i-th element of the final sequence.

Constraints
1≤T≤74
3≤N≤19
1≤Ai≤109 for each valid i

Example Input
2
3
2 5 3
10
38 9 102 10 96 7 46 28 88 13

Example Output
2 5 
102 7 
*/

#include<stdio.h>
int main()
{
	int n,k,w;
	int i,j;
	int temp;
	int l=0;
	scanf("%d",&n); //number of test cases
	n=n*2;
	int sol[n];
	n=n/2;

	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		int a[k],b[k]; //Number of elements in each test case

		for(j=0;j<k;j++)
		{
			scanf("%d",&a[j]); //Input
			b[j]=a[j];
		}

		for(j=0;j<k;j++)
		{
			for(w=j;w<k;w++)
			{
				if(a[j]>a[w])
				{
					temp=a[j];
					a[j]=a[w];
					a[w]=temp;
				}

			}
		}

		

		for(j=0;j<k;j++)
			{
				if(b[j]==a[0])
					{
						sol[l]=a[0];
						sol[l+1]=a[k-1];
						l=l+2;
						break;
					}
				else if(b[j]==a[k-1])
					{
						sol[l]=a[k-1];
						sol[l+1]=a[0];
						//printf("%d %d",a[k-1],a[0] );
						l=l+2;
						break;
					}
				else 
					continue;
			}
	}

	for(i=0;i<n*2;i=i+2)
	{
		printf("%d %d\n",sol[i],sol[i+1]);
	}


}
