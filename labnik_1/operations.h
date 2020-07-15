#ifndef OPERATIONS_H
#define OPERATIONS_H
#include "structures.h"

void move_point(point& dot, move coeff);

int move_points_array(model& obj, move coeff);

void scale_point(point& dot, scale coeff);

int scale_points_array(model& obj, scale coeff);

double d_cos(double angle);

double d_sin(double angle);

void x_turn_point(point& dot, double angle);

void y_turn_point(point& dot, double angle);

void z_turn_point(point& dot, double angle);

int turn_points_array(model& obj, turn coeff);

#endif // OPERATIONS_H
