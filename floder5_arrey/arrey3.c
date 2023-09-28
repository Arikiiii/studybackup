#include <stdio.h>
int main (){
    int i;
    char str[10]={'m','y','S','t','r'};
    char strNoSize[]="myStr";
    printf("Size of str = %d\n" ,sizeof(str));
    printf("Size of strNoSize = %d\n" ,sizeof(strNoSize));
    for ( i = 0; i < 10; i++){
        printf("str[%d] = %c\n",i,str[i]);
    }
    for ( i = 0; i < 6; i++){
        printf("strNoSize[%d] = %c\n",i,strNoSize[i]);
    }
    printf("str=%s\n",str);
    printf("strNoSize=%s\n",strNoSize); 

    str[2] = '\0';
    strNoSize[3] = '\0';
    for ( i = 0; i < 10; i++){
        printf("str[%d] = %c\n",i,str[i]);
    }
    for ( i = 0; i < 6; i++){
        printf("strNoSize[%d] = %c\n",i,strNoSize[i]);
    }
    /* 
    str แสดงผล my เนื่องจาก str[2]=\0 เป็นการจบการทำงาน จึงแสดงผลแค่ str 0 1 
    และหยุดการทำงานเมื่อเจอ str[2] 
    strNoSize แสดงผล myS r  เนื่องจาก strNoSize[3]=\0 เป็นการจบการทำงาน จึงแสดง strNoSize 0 1 2
    และหยุดการทำงานเมื่อเจอ strNoSize[3] แล้วทำ strNoSize[4]
    */
return 0;
}