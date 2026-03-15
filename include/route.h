#ifndef ROUTE_H
#define ROUTE_H

#define MAX_ROUTES 10
#define NAME_LEN 50

typedef struct
{
    int number;
    char start[NAME_LEN];
    char end[NAME_LEN];
    float length;
} MARSHRUT;

int input_routes(MARSHRUT routes[]);
void find_max_route(MARSHRUT routes[], int n);
void sort_routes(MARSHRUT routes[], int n);
void search_point(MARSHRUT routes[], int n, char *point);

#endif
