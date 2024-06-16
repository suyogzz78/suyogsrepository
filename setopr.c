//wap in c to implement basic set operations 
#include <stdio.h>
int main()
{
int i,j,k,p,ch,n1,n2,set1[10],set2[10],set3[20],flag;
printf("enter size of set1:");
scanf("%d",&n1);
printf("enter the elements of set 1:");
for(i=0;i<n1;i++)
{
    scanf("%d",&set1[i]);
}
printf("enter size of set2: ");
scanf("%d",&n2);
printf("enter elements of set 2:");
for(i=0;i<n2;i++)
{
scanf("%d",&set2[i]);
}
while(1)
{
    printf("\n Press 1 for union:");
    printf("\n Press 2 for intersection :");
    printf("\n Press 3 for difference:");
    printf("\n enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("\n The union is:\n");
        k=0;
       for(i=0;i<n1;i++)
    {
        set3[k]=set1[i];
        k++;
    }
    for(i=0;i<n2;i++)
    {
        flag=1;
        for(j=0;j<n1;j++)
        {
            if(set2[i]==set1[j])
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            set3[k]=set2[i];
            k++;
        }
    }
    p=k;
    for(k=0;k<p;k++)
    {
        printf("%d",set3[k]);

    }
    break;
    case 2:
    printf("the intersection is :\n");
    k=0;
    for(i=0;i<n2;i++)
    {
        flag=1;
        for(j=0;j<n1;j++)
        {
            if(set2[i]==set1[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            set3[k]=set2[i];
            k++;
        }
    }
    p=k;
    for(k=0;k<p;k++)
    {
        printf("%d",set3[k]);
    }
    break;
    case 3:
    printf("the difference is :\n");
    k=0;
    for(i=0;i<n1;i++)
    {
        flag=1;
        for(j=0;j<n2;j++)
        {
            if(set1[i]==set2[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            set3[k]=set1[i];
            k++;

        }
    }
    p=k;
    for (k=0;k<p;k++)
    {
        printf("%d",set3[k]);

    }
    break;
    default:
    printf("Invalid choice :");
    }
  
}
return 0;
}