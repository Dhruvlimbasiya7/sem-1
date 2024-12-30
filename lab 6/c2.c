#include<stdio.h>
void main()
{
    int red,green,blue;
    float white,cyan,magenta,yellow,black;
    printf("enter code of red =");
    scanf("%d",&red);
    printf("enter code of green =");
    scanf("%d",&green);
    printf("enter code of blue =");
    scanf("%d",&blue);
    if (red<=255&&green<=255&&blue<=255)
    {
        white=((red>green)?(red>blue?red:blue):(green>blue?green:blue));
        printf("white colour=%f",white);
        cyan=(white - red/255.0)/white ;
        magenta=(white - green/255.0)/white;
        yellow=(white - blue/255.0)/white;
        black=1-white;
        printf("\ncyan=%f",cyan);
        printf("\nmagneta=%f",magenta);
        printf("\nyellow=%f",yellow);
        printf("\nblack=%f",black);
    }
    else{
        printf("enter number of colour codes is invalid");
    }
}
