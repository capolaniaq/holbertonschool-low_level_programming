#!/usr/bin/python3
"""Module that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """perimeter of the island described in grid"""
    vertically = 0
    horizontally = 0
    colum = []
    grid_change = []
    counter = 0
    while (len(grid_change) < len(grid[0])):
        for row in grid:
            colum.append(row[counter])
        grid_change.append(colum)
        colum = []
        counter += 1

    for row in grid:
        if 1 in row:
            vertically += 1

    for colum in grid_change:
        if 1 in colum:
            horizontally += 1

    return (2*(horizontally + vertically))
