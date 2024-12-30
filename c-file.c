#include <stdio.h>
//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

int __stdcall SumNegativeNumber(int p1[],int p2);

#ifdef __cplusplus
}
#endif

int main() {
    system("cls"); // Clear screen function
    int array[10]={2,-3,4,-5,6,7,8,-9, 1,-10}; // Initialized the array with values
    printf("The array is: ");
    for(int i = 0;  i<10; i++)
    {
        printf("%d", array[i]); // Printing the array elements
        printf(" ");
    }
    getch(); // Waiting for key press, it is optional
    int size=sizeof(array)/sizeof(array[0]); // Calculating the size of array to perform the action of all elements
    int sum = SumNegativeNumber(array,size);
    printf("\nSum of negative Numbers: %d\n", sum);
    return 0;
}