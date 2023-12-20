#!/usr/bin/python3
"""hey"""


def island_perimeter(grid):
    """ Calculate the perimeter of the island in a grid
    The grid is a list of lists of integers,
    where 0 represents a water zone and 1 represents a land zone
    The function returns the perimeter of the island. """
    if not grid or type(grid) != list:
        return 0
    for m in grid:
        if type(m) != list:
            return 0
        for n in m:
            if type(n) != int:
                return 0

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == len(grid[i]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter
