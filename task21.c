#include <stdio.h>
int main()
{
        int std[50], n, i, lar, bill[50];

        printf("\n Enter the number of the students: ");
	scanf("%d", &n);
do
{
        for (i = 0; i <= n; i++)
	{
		printf("\n Enter the number of gifts of student %d : ", n+1);
		scanf("%d", &std[i]);
	}
 	lar = std[0];
	for (i = 1; i < n; i++) 
	{
		if (lar < std[i])
			{
			lar = std[i];
			std[i]=0;
			}
	}
	if(std[i]==0)
	{
		for(i=i ;i<=n; i++)
		{
			bill[i]=lar;
			break;
		}

}while(std[i]!=0)

for(i=0;i<=n;i++)
{
	printf("\n Guy have %d gifts go to counter",bill[i+1]);
	printf("\n Wait till the person complete their billing");
}
        return 0;
}