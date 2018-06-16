#!/usr/bin/python3
"""
Island Perimeter Module
"""


def island_perimeter(grid):
    """ returns the perimeter of the island """

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                if i == 0 or j == 0:
                    perimeter += 1
                if i or j == 1:
                    if grid[i - 1][j] == 1 or grid[j][i - 1] == 1:
                        perimeter -=2
    return perimeter
