/*
** EPITECH PROJECT, 2023
** my
** File description:
** h
*/

#ifndef MY_PROTOTYPE
    #define MY_PROTOTYPE

struct vector{
    double x;
    double y;
    double z;
};

struct vector *create_vector(double x, double y, double z);
struct vector *sums_vector(struct vector *U, struct vector *V);
struct vector *diff_vector(struct vector *U, struct vector *V);
struct vector *coeff(struct vector *Vector, int n);
double norm(struct vector *Vector);
struct vector *position( struct vector *V, struct vector *Vector, int n);
double angle(struct vector *Vector, int n);

#endif
