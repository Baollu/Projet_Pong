/*
** EPITECH PROJECT, 2023
** diff
** File description:
** vec
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"

struct vector *diff_vector(struct vector *U, struct vector *V)
{
    struct vector *VU;
    VU = create_vector( V->x - U->x, V->y - U->y, V->z - U->z);
    return VU;
}
