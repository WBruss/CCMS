#include <stdio.h>
#include <string.h>


struct cotton
    {
        char area[20];
        float kilos;
        int farmerId;
    };

int main(){
    
    struct cotton collect;
    struct cotton *c_ptr;

    c_ptr = &collect;

    char title[] = "Cotton collection management system";

    printf("%s\n", strupr(title));

    printf("Enter cotton details\n");

    printf("Area: ");
    scanf("%s", c_ptr->area);

    printf("Kilos: ");
    scanf("%f", &(c_ptr->kilos));

    printf("FarmerId: ");
    scanf("%d", &(c_ptr->farmerId));

    printf("\nSummary\n");

    printf("Area: %s\n", c_ptr->area);
    printf("Kilos: %.2f\n", c_ptr->kilos);
    printf("FarmerId: %d\n", c_ptr->farmerId);
    
}