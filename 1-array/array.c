//
// Created by 33133 on 24-4-26.
//
# include <stdio.h>
# include <stdlib.h>

int main(void )
{
    //1.初始化数组
    int arr[5]={1,2,3,4,5};

}
//2.访问元素
    /*顺序访问元素
     * by 下标
     */
    int AccessMethodByOrder()
    {
        int arr[5]={1,2,3,4,5};
        int i;
        for(i=0;i<5;i++)
        {
            printf("%d\n",arr[i]);
        }
        return 0;
    }
    /*访问元素
     * by 指针
     */
    int AccessMethodByPointer()
    {
        int arr[5]={1,2,3,4,5};
        int *p;
        for(p=arr;p<arr+5;p++)
        {
            printf("%d\n",*p);
        }
        return 0;
    }
    /*
     * 随机访问元素
     */

    int randomAccess(int *nums, int size) {
        // 在区间 [0, size) 中随机抽取一个数字
        int randomIndex = rand() % size;
        // 获取并返回随机元素
        int randomNum = nums[randomIndex];
        return randomNum;
    }