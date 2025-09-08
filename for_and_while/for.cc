#include<iostream>
int main()
{   long long arry[10];
    arry[0]= arry[1]= 1;
    for (int i = 2; i < sizeof(arry)/sizeof(long long); i++)
    {
     arry[i] = i * arry[i -1];
    }
    
    return 0;
}
