/*
宏名在源程序中若用引号括起来，则预处理程序不对其作宏代换
*/

#include <stdio.h>

#define OK 10

main(){
    printf("OK\n");
}