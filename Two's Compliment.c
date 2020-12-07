#include<stdio.h>
int main()
{
    int size,i,j,carry=1;
    printf("Enter size of binary number:");
    scanf("%d",&size);
    int binary[size+1],onesc[size+1],twosc[size+1];
    printf("Enter binary number:");
    //to input binary number in binary array
    for(i=0;i<size;i++)
    {
        printf("Enter %d number",(i+1));
        scanf("%d",&j);
        binary[i]=j;
    }
    //to switch 1 and 0 for one's compliment
    for(i=0;i<size;i++)
    {
         if (binary[i]==0)
        {
            onesc[i]=1;
        }
        else if(binary[i]==1)
        {
            onesc[i]=0;
        }
    }
    //two's compliment adding 1
    for(i=size-1;i>=0;i--)
    {
        if (onesc[i]==0 && carry==1)
        {
            twosc[i]=1;
            carry=0;
        }
        else if(onesc[i]==1 && carry==1)
        {
            twosc[i]=0;
        }
        else
        {
            twosc[i]=onesc[i];
        }
    }
    printf("\nTwo's Compliment of number is:");

    for(i=0;i<size;i++)
    {
        printf("%d",twosc[i]);
    }
}
