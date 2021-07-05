#!/usr/bin/python3
"""Module that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """perimeter of the island described in grid"""
    perimeter = 0
    for i, row in enumerate(grid):
        for j, land in enumerate(row):
            if land == 1:
                if i == 0:
                    perimeter += 1
                elif grid[i - 1][j] == 0:
                    perimeter += 1
                if i < len(grid) - 1:
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
                if j != 0:
                    if grid[i][j - 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
                if j < len(row) - 1:
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
    return perimeter
