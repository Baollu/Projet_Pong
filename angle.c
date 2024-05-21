/*
** EPITECH PROJECT, 2023
** anlge
** File description:
** angle
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/my.h"

double angle(struct vector *Vector, int n)
{
    double V;
    double radiant;
    double norm_V;
    double degre;

    V = norm(Vector);
    radiant = asin(Vector->z / V);
    degre = radiant * 180 / M_PI;
    if (degre < 0)
        degre = degre * (-1);
    return (degre);
}
