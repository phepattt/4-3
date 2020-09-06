#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int length, width, base, num, height;
    double areaREG, areaTRI;
    printf("//enter integer number\n");
    printf("select 1.(regtangle) or 2.(triangle)\n");
    scanf("%d", &num);
    if (num > 0 && num < 3) {
        switch (num) {

        case 1:
            printf("Enter width,length = ");
            scanf("%d ", &width);
            scanf("%d", &length);

            printf("rectangle area = %lf", areaREG = width * length);
            break;


        case 2:
            printf("Enter base,height = ");
            scanf("%d", &base);
            scanf("%d", &height);
            printf("tritangle area = %lf", (areaTRI = base * height) / 2);
            break;
        }
    }
    else {
        printf("please enter 1 or 2 ");
    }
}


