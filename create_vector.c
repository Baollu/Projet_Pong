/*
** EPITECH PROJECT, 2023
** create
** File description:
** vector
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"

struct vector *create_vector(double x, double y, double z)
{
    struct vector *v1;

    v1 = malloc(sizeof(struct vector));
    v1->x = x;
    v1->y = y;
    v1->z = z;
    return v1;
}
