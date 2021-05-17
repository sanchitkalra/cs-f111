#include <stdio.h>
#include <math.h>

int convert(long long int n)
{
    int i=0,rem,dec=0;
    while(n>0)
    {
        rem=n%10;
        dec=dec+rem*pow(2,i);
        i++;
        n/=10;
    }
    return dec;
}
long long convertb(long long int n)
{
    int i=0,rem;
    long long bin=0;
    while(n>0)
    {
        rem=n%2;
        bin=bin+rem*pow(10,i);
        i++;
        n/=2;
    }
    return bin;
}
long long one(long long n)
{
    int r,j=0; long long num=0;
    while(n>0)
    {
        r=n%10;
        if(r==1)
        num=num+0*pow(10,j);
        else
        num=num+1*pow(10,j);
        j++;
        n/=10;
    }
    return num;
}
int main()
{
    long long int n1,n2,sum=0;int r1,r2,i=0,carry=0;
    printf("Enter two binary numbers to be subtracted:\n");
    scanf("%lld %lld", &n1, &n2);
    n1=convert(n1);n2=convert(n2);
    n1=convertb(n1);n2=convertb(n2);
    n2=one(n2);printf("1's complement: %lld\n",n2);
    r1=n1%10;
    r2=n2%10;
    if(r1==1&r2==1){
        carry=1;
    }
    else {carry=0;}
    while(n1>0||n2>0)
    {
        r1=n1%10;
        r2=n2%10;
        if(r1==1&&r2==1&&carry==1)
        {
            sum=sum+1*pow(10,i);
            carry=1;
        }
        else if(r1==1&&r2==1&&carry==0)
        {
            sum=sum+0*pow(10,i);
            carry=1;
        }
        else if((r1==1&&r2==0&&carry==1)||(r1==0&&r2==1&&carry==1))
        {
            sum=sum+0*pow(10,i); carry=1;
        }
        else if((r1==1&&r2==0&&carry==0)||(r1==0&&r2==1&&carry==0))
        {
            sum=sum+1*pow(10,i); carry=0;
        }
        else if(r1==0&&r2==0&&carry==1)
        {
            sum=sum+1*pow(10,i); carry=0;
        }
        else 
        {
            sum=sum+0*pow(10,i);
            carry=0;
        }
        i++; 
        n1/=10; n2/=10;
    }
    printf("Sum: %lld Carry: %d\n",sum,carry);
    if(carry==1)
    {
        printf("debug: %lld \n", sum);
        sum=convert(sum);
        sum=sum+1;
        sum=convertb(sum);
        printf("Difference: %lld\n",sum);
    }
    else
    {
        printf("debug: %lld \n", sum);
        sum=one(sum);
        printf("Difference: -%lld\n",sum);
    }
    
    
    return 0;
}