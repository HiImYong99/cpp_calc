#include "calc_main.h"



void Add(History* st, int x, int y) {
	st->op = '+';
	st->input1 = x;
	st->input2 = y;
	st->result = (x + y); 
};

void Sub(History* st, int x, int y) {
	st->op = '-';
	st->input1 = x;
	st->input2 = y;
	st->result = (x - y);
};

void Mul(History* st, int x, int y) {
	st->op = '*';
	st->input1 = x;
	st->input2 = y;
	st->result = (x * y);
};

void Div(History* st, int x, int y) {
	st->op = '/';
	st->input1 = x;
	st->input2 = y;
	st->result = (x / y);
};

