#include <stdio.h>
#include <string.h>
#include "route.h"

int input_routes(MARSHRUT routes[])
{
    int n;

    printf("Number of routes (max 10): ");
    scanf("%d", &n);

    if (n > MAX_ROUTES)
        n = MAX_ROUTES;

    for (int i = 0; i < n; i++)
    {
        printf("\nRoute %d\n", i + 1);

        printf("Number: ");
        scanf("%d", &routes[i].number);

        printf("Start point: ");
        scanf("%s", routes[i].start);

        printf("End point: ");
        scanf("%s", routes[i].end);

        printf("Length: ");
        scanf("%f", &routes[i].length);
    }

    return n;
}

void find_max_route(MARSHRUT routes[], int n)
{
    int max = 0;

    for (int i = 1; i < n; i++)
        if (routes[i].length > routes[max].length)
            max = i;

    printf("\nLongest route:\n");
    printf("%d %s %s %.2f\n",
           routes[max].number,
           routes[max].start,
           routes[max].end,
           routes[max].length);
}

void sort_routes(MARSHRUT routes[], int n)
{
    MARSHRUT temp;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (routes[j].number > routes[j + 1].number)
            {
                temp = routes[j];
                routes[j] = routes[j + 1];
                routes[j + 1] = temp;
            }
}

void search_point(MARSHRUT routes[], int n, char *point)
{
    printf("\nRoutes with point %s:\n", point);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(routes[i].start, point) == 0 ||
            strcmp(routes[i].end, point) == 0)
        {
            printf("%d %s %s %.2f\n",
                   routes[i].number,
                   routes[i].start,
                   routes[i].end,
                   routes[i].length);
        }
    }
}
