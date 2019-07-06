#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k[10],temp=0;
    //clrscr();
    printf("Enter 10 numbers\n");

    for(i=0;i<=9;i++)
    scanf("%d",&k[i]);
    for(i=0;i<=8;i++)
    for(j=i+1;j<=9;j++)
    {
        if(k[i]>k[j])
        {
            temp=k[i];
            k[i]=k[j];
            k[j]=temp;
        }
    }

printf("HE0llo yhesere");
printf("\n");
for(i=0;i<=9;i++)
printf("%d ",k[i]);

getch();
return 0;
}
