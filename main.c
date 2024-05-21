/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"

int main(int argc, char **argv)
{
    if (argc != 8)
        return 84;
    double cx = atof(argv[1]);
    double cy = atof(argv[2]);
    double cz = atof(argv[3]);
    double dx = atof(argv[4]);
    double dy = atof(argv[5]);
    double dz = atof(argv[6]);
    int n = atoi(argv[7]);
    struct vector *U = create_vector(cx, cy, cz);
    struct vector *V = create_vector(dx, dy, dz);
    struct vector *VU = diff_vector(U, V);
    struct vector *V2 = position(V, VU, n);
    double result = angle(VU, n);
    printf("The velocity vector of the ball is:\n(%.2lf, %.2lf, %.2lf)\n", VU->x, VU->y, VU->z);
    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%.2lf, %.2lf, %.2lf)\n", V2->x, V2->y, V2->z);
    if ((VU->z > 0 && dz < 0) || (dz > 0 && VU->z < 0))
        printf("The incidence angle is:\n%.2lf degrees\n", result);
    if ((VU->z < 0 && dz < 0) || (dz > 0 && VU->z > 0))
        printf("The ball won't reach the paddle.\n");
    return 0;
}
