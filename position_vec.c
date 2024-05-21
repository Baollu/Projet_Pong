/*
** EPITECH PROJECT, 2023
** position
** File description:
** vec
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"

struct vector *position( struct vector *V, struct vector *Vector, int n)
{
    struct vector *t;
    struct vector *V2;

    t = coeff(Vector, n);
    V2 = sums_vector(V, t);
    return (V2);
}
