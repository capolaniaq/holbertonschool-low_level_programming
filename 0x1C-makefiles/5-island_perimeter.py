#!/usr/bin/python3
"""Module that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """perimeter of the island described in grid"""
    perimeter = 0
    for row in grid:
        for land in row:
            if land == 1:
                if perimeter == 0:
                    perimeter +=3
                else:
                    perimeter +=2
    return perimeter + 1
