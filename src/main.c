#include <stdio.h>
#include <string.h>

#include "route.h"

int main()
{
    MARSHRUT routes[MAX_ROUTES];
    int n = input_routes(routes);

    find_max_route(routes, n);

    sort_routes(routes, n);

    printf("\nRoutes after sorting:\n");

    for (int i = 0; i < n; i++)
    { 
           printf("%d %s %s %.2f\n",
           routes[i].number,
           routes[i].start,
           routes[i].end,
           routes[i].length);
    }
    char point[50];
    printf("\nEnter point to search: ");
    scanf("%s", point);

    search_point(routes, n, point);

    return 0;
}
