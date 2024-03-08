#include <stdio.h>

int circle()
{
    int r, cir;
    printf("enter the radius\n");
    scanf("%d", &r);
    cir = 3.14 * r * r;
    return cir;
}
int triangle()
{
    int b, h;
    printf("enter the b\n");
    scanf("%c", b);
    printf("enter the h\n");
    scanf("%c", h);
    int tri = 1 / 2 * b * h;
    return tri;
}
int rectangle()
{
    int b, l;
    printf("enter the b\n");
    scanf("%c", b);
    printf("enter the l\n");
    scanf("%c", l);
    int rec = l * b;
    return rec;
}
void main()
{
    int num;
    printf("1.circle\n2.triangle\n3rectangle");
    scanf("%d", &num);
    switch (num)
    {
    case 1:

        int cir1 = circle();
        printf("area of circle %d", cir1);
        break;
    case 2:
        int tri1 = triangle();
        printf("area of triangle %d", tri1);
        break;

    case 3:
        int rec1 = rectangle();
        printf("area of rectangle %d", rec1);
        break;
    default:
        break;
    }
}
