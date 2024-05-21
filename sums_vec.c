/*
** EPITECH PROJECT, 2023
** sums
** File description:
** sums
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"

struct vector *sums_vector(struct vector *U, struct vector *V)
{
    struct vector *UV;
    UV = create_vector(V->x + U->x, V->y + U->y, V->z + U->z);
    return UV;
}
