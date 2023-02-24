#!/usr/bin/python3
"""This module calculates the perimeter of an island
    represented in a grid
"""


def island_perimeter(grid):
    """Calculate the perimeter of a given grid.
    Arguments:
        grid(list): grid representing an island and water
    Return:
        perimter of the island
    """
    land = 0
    edges = 0
    width = len(grid[0])
    height = len(grid)

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # Island located
                land += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
    return (land * 4) - (edges * 2)
