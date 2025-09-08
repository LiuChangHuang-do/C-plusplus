//题目 1：数组中出现次数最多的元素
//问题描述：给定一个整数数组 nums，找出数组中出现次数最多的元素（假设数组非空，且存在唯一的多数元素）。
//输入示例：nums = [3,2,3]
//输出示例：3
#include<iostream>
#include<map>
int main()
{
    int num[] = {3,2,1,3,4};
    std::map<int,int> m;
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        /* code */
        m[num[i]]++;
    }
    //变量初始化一定要设置初始值
    int max_count = 1;
    int result = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        /* code */
        if (it->second > max_count)
        {
            /* code */
            max_count = it->second;
            result = it->first;
        }
           

    }
    std::cout<<"max count element is "<<result<<std::endl;

    return 0;
}
