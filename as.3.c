#include<stdio.h>
int main()
{
	struct para{
		char pr[100][50][25];
	}b1;

	int i=0,j=0,k=0,l;
	char a;
	for(i=0;i<100;i++)
	{
		scanf("%c",&a);

		if(a==32)
		{
			j=j+1;
			i=0;
		}
		else if(a==46)
		{
			k=k+1;
			j=0;
			i=0;
		}
		else if(a==10)
		{
			break;
		}
		else
		{
			b1.pr[i][j][k]=a;
		}

	}
	printf("\nnow enter the word,sentence you want to printf");
	int s;
	printf("\n");
	scanf("%d",&s);
	s=s-1;
	printf("\n");

	for(i=0;i<10;i++)
	{
		printf("%c",b1.pr[i][s][s]);
	}
	printf("\n\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%c",b1.pr[j][i][s]);
		}
		printf(" ");
	}
	return 0;
}