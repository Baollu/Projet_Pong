/*
** EPITECH PROJECT, 2023
** vec
** File description:
** vec
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"

double norm(struct vector *Vector)
{
    double norm_V;

    norm_V = Vector->x * Vector->x + Vector->y * Vector->y + Vector->z * Vector->z;
    norm_V = sqrt(norm_V);
    return (norm_V);
}
