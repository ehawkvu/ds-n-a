#ifndef RATIONAL_H
#define RATIONAL_H

typedef struct rational_s {
  int numer, denom;
} rational_t;

rational_t ratio_init();
rational_t ratio_init(int num);
rational_t ratio_init(int numer, int denom);

int gcd(int x, int y);
void ratio_reduce(rational_t *ratio);

#endif