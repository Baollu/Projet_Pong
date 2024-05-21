/*
** EPITECH PROJECT, 2023
** coeff
** File description:
** vec
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"

struct vector *coeff(struct vector *Vector, int n)
{
    struct vector *Vector_coeff;

    Vector_coeff = create_vector(Vector->x * n, Vector->y * n, Vector->z * n);
    return Vector_coeff;
}
