//Find Area of Different shapes.

#include <stdio.h>
int main()
{
    int choice;
    printf("Enter a shape number from the following : \n");
    printf("1.Square\n2.Rectangle\n3.Triangle\n4.Circle\n");
    scanf("%d",&choice);

    switch (choice) {
        case 1:
            {
            float side,area;
            printf("Enter side of the square :");
            scanf("%f",&side);
            area=side*side;
            printf("Area of Square : %.2f",area);
            break;
        }

        case 2:{
            float len,bre,area;
            printf("Enter lenght & breadth of the rectangle :");
            scanf("%f %f",&len,&bre);
            area=len*bre;
            printf("Area of Rectangle : %.2f",area);
            break;
        }

        case 3:{
            float base,height,area;
            printf("Enter base & height of the triangle :");
            scanf("%f %f",&base,&height);
            area=(1/2)*base*height;
            printf("Area of Triangle : %.2f",area);
            break;
        }

        case 4:{
            float rad,area;
            printf("Enter radius of the circle :");
            scanf("%f",&rad);
            area=3.14*rad*rad;
            printf("Area of Circle : %.2f",area);
            break;
        }

        default:
            printf("Invalid Choice.");
    }
    return 0;
}
