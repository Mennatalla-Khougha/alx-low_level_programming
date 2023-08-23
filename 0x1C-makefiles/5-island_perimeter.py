#!/usr/bin/python3
"""This module create the function island_perimeter
"""


def island_perimeter(grid):
    """calculate the perimeter of the island"""
    prem = 0
    width = len(grid[0]) - 1
    height = len(grid) - 1
    for i, row in enumerate(grid):
        for j, ele in enumerate(row):
            if ele:
                if j == width or grid[i][j+1] == 0:
                    prem += 1
                if j == 0 or grid[i][j-1] == 0:
                    prem += 1
                if i == height or grid[i+1][j] == 0:
                    prem += 1
                if i == 0 or grid[i-1][j] == 0:
                    prem += 1
    return prem
