#include <stdio.h>


typedef struct
{
    int lenght;
    int width;
} rectangle;


typedef struct
{
    int x;
    int y;
} position;

typedef struct buildingPlan
{
    rectangle rectangle;
    position position;
} buildingPlan;
int main()
{
    rectangle myRectangle = {5, 10};
    printf("Lenght: %d. Width: %d\n", myRectangle.lenght, myRectangle.width);

    buildingPlan myHouse = {"Caleb Curry", {5, 10}, {32, 48}};

    printf("The house at %d %d (size %d &d) is owned by %s\n",
        myHouse.position.x,
        myHouse.position.y,
        myHouse.rectangle.lenght,
        myHouse.rectangle.lenght,
        myHouse.owner


    );

    
    int size = 3;
    position path[] = {{0, 1}, {1, 2}, {3, 4}};
    
    for (int i = 0; i < size, i++)
    {
        printf("%d %d\n", path[i].x, path[i].y);
    }
    
    buildingPlan *structPointer = &myHouse;
    
    
    
}