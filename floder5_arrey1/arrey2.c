#include <stdio.h>
int main (){
    int num[5]={5,4,3,2,1};

    num[1];//จะมีค่าเท่ากับ 4
        printf("num[1] = %d \n",num[1]);

    num[4];//จะมีค่าเท่ากับ 1
        printf("num[4] = %d \n",num[4]);

    num[ num[4] ];// โดย num[4] ใน num[ ] มีค่าเท่ากับ 1 จะกลายเป็น num[1] และมีค่าเท่ากับ 4
        printf("num[ num[4] ] = %d\n",num[ num[4] ]);

    num[1] + num[3];//num[1]ที่มีค่าเท่ากับ 4 + num[3] ที่มีค่าเท่ากับ 2 จะได้ 4 + 2 = 6
        printf("num[1] + num[3] = %d \n", num[1] + num[3]);

    num[ num[4] ] + num[ num[2] ];
    /*
    num[4] ใน num[] = 1 + num[2] ใน num[] = 3 
    จะได้เป็น 
     num[1] + num[3] แทนค่าจะได้ 4 + 2 = 6
    */
        printf("num[ num[4] ] + num[ num[2] ] = %d ", num[ num[4] ] + num[ num[2] ]);
    return 0;
}