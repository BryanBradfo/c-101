#include <stdlib.h> 
#include <stdio.h>
#include <assert.h>
#include <math.h>

// Definition du type Point 


int main(){
    struct Point{
        int X;
        int Y;
    };
    // Déclarer deux variables ptA et ptB de types Point
    struct Point ptA, ptB;
    // Initialiser ptA à (0,0)
    ptA.X = 0;
    ptA.Y = 0;
    // Initialiser ptB à (10,10)
    ptB.X =10;
    ptB.Y =10;
    // Calculer la distance entre ptA et ptB.
    float distance = 0;
    distance = sqrt((ptA.X-ptB.X)*(ptA.X-ptB.X)+(ptA.Y-ptB.Y)*(ptA.Y-ptB.Y));
    assert( (int)(distance*distance) == 200);
    printf("%i",(int)(distance*distance));
    return EXIT_SUCCESS;
}
