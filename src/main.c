#include <stdio.h>
#include <string.h>

#include "string_task.h"
#include "route.h"

int main()
{
    char input[100];
    char output[300];

    printf("Enter string: ");
    scanf("%s", input);

    insert_ascii_codes(input, output);

    printf("Result: %s\n", output);

    MARSHRUT routes[MAX_ROUTES];
    int n = input_routes(routes);

    find_max_route(routes, n);

    sort_routes(routes, n);

    char point[50];
    printf("\nEnter point to search: ");
    scanf("%s", point);

    search_point(routes, n, point);

    return 0;
}
