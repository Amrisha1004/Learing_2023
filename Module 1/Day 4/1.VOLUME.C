#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box *box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box *box) {
    double length = box->length;
    double width = box->width;
    double height = box->height;
    
    return 2 * (length * width + length * height + width * height);
}

int main() {
    struct Box myBox;
    struct Box *boxPtr = &myBox;

    printf("Enter the length: ");
    scanf("%lf", &(boxPtr->length));

    printf("Enter the width: ");
    scanf("%lf", &(boxPtr->width));

    printf("Enter the height: ");
    scanf("%lf", &(boxPtr->height));
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);
    printf("Volume: %.2lf\n", volume);
    printf("Total Surface Area: %.2lf\n", surfaceArea);

    return 0;
}

