// Ileto, Miguel R. | Marquez, James Benedict T. | S30I
#include <stdio.h>
#include <stdlib.h>

extern void imgCvtGrayFloatToInt(int height, int width, float* vecfloat, int* result);

int main(){
    int height, width;
    scanf("%d %d", &height, &width);

    float* vecfloat = (float*)malloc(height*width*sizeof(float));
    int* result = (int*)malloc(height*width*sizeof(int));

    imgCvtGrayFloatToInt(height, width, vecfloat, result);

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            printf("%d ", result[i * width + j]);
        }
        printf("/n");
    }

    return 0;
}