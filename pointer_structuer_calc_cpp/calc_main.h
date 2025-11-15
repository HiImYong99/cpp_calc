#pragma once

#ifndef CALC_MAIN_H
#define CALC_MAIN_H

struct History {
	char op;
	int input1, input2, result;
};

void Add(struct History *st, int x ,int y);
void Sub(struct History* st, int x ,int y);
void Mul(struct History* st, int x ,int y);
void Div(struct History* st, int x ,int y);

#endif