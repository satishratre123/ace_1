#include <stdio.h>
int main()
{
int n;
printf("enter a number\n");
///scanf("%d",&n);

while(scanf("%d",&n))
{  if(n==0)
   printf("Zero");
    if(n>=3000)
{
    printf("Enter a number less than 3000");
    exit(0);
}
    if(3000>n&&n>=2000)

    {
    printf("Two Thousand ");
    n%=2000;
    }
  if(2000>n&&n>=1000)
{
    printf("One Thousand ");
    n%=1000;
}
 if(n>=900)
{
    printf("Nine Hundred ");
    n%=900;
}
 if(n>=800)
{
    printf("Eight Hundred ");
    n%=800;
}
 if(n>=700)
{
    printf("Seven Hundred ");
    n%=700;
}
 if(n>=600)
{
    printf("Six Hundred ");
    n%=600;
}
 if(n>=500)
{
    printf("Five Hundred ");
    n%=500;
}
 if(n>=400)
{
    printf("Four Hundred ");
    n%=400;
}
 if(n>=300)
{
    printf("Three Hundred ");
    n%=300;
}
 if(n>=200)
{
    printf("Two Hundred ");
    n%=200;
}
 if(n>=100)
{
    printf("One Hundred ");
    n%=100;
}
 if(n>=90)
{
    printf("Ninety ");
    n%=90;
}
 if(n>=80)
{
    printf("Eighty ");
    n%=80;
}
 if(n>=70)
{
    printf("Seventy ");
    n%=70;
}
 if(n>=60)
{
    printf("Sixty ");
    n%=60;
}
 if(n>=50)
{
    printf("Fifty ");
    n%=50;
}
 if(n>=40)
{
    printf("Forty ");
    n%=40;
}
 if(n>=30)
{
    printf("Thirty ");
    n%=30;
}
 if(n>=20)
{
    printf("Twenty ");
    n%=20;
}

{   if(n==19)
    printf("Nineteen");
    else if(n==18)
    printf("Eighteen");
    else if(n==17)
    printf("Seventeen");
    else if(n==16)
    printf("Sixteen");
    else if(n==15)
    printf("Fifteen");
    else if(n==14)
    printf("Fourteen");
    else if(n==13)
    printf("Thirteen");
    else if(n==12)
    printf("Twelve");
    else if(n==11)
    printf("Eleven");
    else if(n==10)
    printf("Ten");
    else if(n==9)
    printf("Nine");
    else if(n==8)
    printf("Eight");
    else if(n==7)
    printf("Seven");
    else if(n==6)
    printf("Six");
    else if(n==5)
    printf("Five");
    else if(n==4)
    printf("Four");
    else if(n==3)
    printf("Three");
    else if(n==2)
    printf("Two");
    else if(n==1)
    printf("One");
}
printf("\n");
}



   return 0;
}
