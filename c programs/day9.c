// An automobile company manufactures both a two wheeler (TW)
// and a four wheeler (FW). A company manager wants to make the production of
// both types of vehicle according to the given data below:

// 1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
// 2nd data, Total number of wheels = W
// The task is to find how many two-wheelers as well as four-wheelers need to
// manufacture as per the given data.

// Example :
// Input :
// 200  -> Value of V
// 540   -> Value of W

// Output :
// TW =130 FW=70

// Explanation:
// 130+70 = 200 vehicles
// (70*4)+(130*2)= 540 wheels

#include <stdio.h>
void main()
{
    int v, w;
    printf("enter the total number of vechicle \n");
    scanf("%d", &v);
    printf("enter the total wheels\n");
    scanf("%d", &w);
    // TW + FW = V
    // 2 * TW + 4 * FW = W
    int fw = (w - 2 * v) / 2;
    int tw = v - fw;
    printf("the total number of two wheeler:%d\n", tw);
    printf("the total number of four wheelers:%d\n", fw);
}