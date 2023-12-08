#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int secretNumber, guess;
    srand(time(0));  // 初始化随机数生成器
    secretNumber = rand() % 100 + 1;  // 生成1-100的随机数
    printf("欢迎来到猜数字游戏！\n");
    printf("我已经选择了一个1-100之间的数字，请你猜猜是多少。\n");
    do {
        printf("请输入你的猜测：");
        scanf("%d", &guess);  // 获取用户输入
        if (guess < secretNumber) {
            printf("太低了！再试一次。\n");
        } else if (guess > secretNumber) {
            printf("太高了！再试一次。\n");
        } else {
            printf("恭喜你，猜对了！\n");
        }
    } while (guess != secretNumber);
    return 0;
}

