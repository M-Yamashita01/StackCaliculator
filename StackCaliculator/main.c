//
//  main.c
//  StackCaliculator
//
//  Created by Yamashita Masato on 2014/08/15.
//  Copyright (c) 2014年 Yamashita Masato. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define STACK_MAX 10

/*配列によるスタック構造*/
double stack[STACK_MAX];
/*スタック頂上の位置(最下部からのオフセット)*/
int stack_top = 0;


/*スタックへのpush*/
void stack_push(double val) {
    if (stack_top == STACK_MAX) {
        /*スタックが満杯になっている*/
        printf("エラー:スタックが満杯です(Stack overflow)\n");
        exit(EXIT_FAILURE);
    }else{
        /*渡された値をスタックに積む*/
        stack[stack_top] = val;
        stack_top++;
    }
}
