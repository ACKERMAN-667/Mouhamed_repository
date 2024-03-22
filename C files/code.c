#include<stdio.h>
#include<math.h>
int add(int a,int b)
int main()
{
    int result = add(2,3);
    printf("%d\n",result);
    return 0;
}
int add(int a,int b){
    return a+b;
}