#include <stdio.h>
typedef static int stint;
stint a = 0;  // 将这一行移到函数外部
void test()
{
    a++;
    printf("%d\n",a);
}
int main()
{
    int i =0;
    while(i<10)
    {
        test();
        i++;
    }
    return 0;
}

