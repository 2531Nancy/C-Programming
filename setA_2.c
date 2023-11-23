#include <stdio.h>
#include <math.h>

float Distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float Slope(float x1, float y1, float x2, float y2) {
    if (x1 == x2) {
        printf("The slope is undefined (vertical line).\n");
        return 0.0;
    } else {
        return (y2 - y1) / (x2 - x1);
    }
}

int sameQuad(float x1, float y1, float x2, float y2) {
    if ((x1 > 0 && x2 > 0) || (x1 < 0 && x2 < 0)) {
        if ((y1 > 0 && y2 > 0) || (y1 < 0 && y2 < 0)) {
            return 1; // Points lie in the same quadrant
        }
    }
    return 0; // Points lie in dif quadrant
}

int main() {
    float x1, y1, x2, y2;
    int n;

    
    printf("Enter coordinates of Point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of Point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    do {
     
        printf("\nMenu:\n");
        printf("1. Calculate Distance between points\n");
        printf("2. Calculate Slope of line between points\n");
        printf("3. Check whether they lie in the same quadrant\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("Distance btwn points: %.2f\n", Distance(x1, y1, x2, y2));
                break;

            case 2:
                printf("Slope of line btwn points: %.2f\n", Slope(x1, y1, x2, y2));
                break;

            case 3:
                if (sameQuad(x1, y1, x2, y2)) {
                    printf("Points lie in the same quadrant.\n");
                } else {
                    printf("Points do not lie in the same quadrant.\n");
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid \n");
        }

    } while (n != 4);
    return 0;
}
