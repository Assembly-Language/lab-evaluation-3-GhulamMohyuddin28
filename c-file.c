#include <stdio.h>
//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

int __stdcall SumNegativeNumber(p1,p2);

#ifdef __cplusplus
}
#endif

int main() {
    system("cls");
    int array[10]={2,-3,4,-5,-6,7,8,-9, 1,-10};
    printf("The array is: ");
    for(int i = 0;  i<=10; i++)
    {
        printf("%d", array[i]);
        printf(" ");
    }
    getch();
    int size=sizeof(array)/sizeof(array[0]);
    int sum = SumNegativeNumber(array,size);
    printf("Sum of negative Numbers: %d\n", sum);
    return 0;

    
    return 0;
}