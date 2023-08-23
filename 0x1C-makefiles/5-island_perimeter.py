#!/usr/bin/python3
"""This module create the function island_perimeter
"""


def island_perimeter(grid):
    """calculate the perimeter of the island"""
    prem = 0
    for i, row in enumerate(grid):
        for j, ele in enumerate(row):
            if ele:
                if grid[i][j+1] == 0:
                    prem += 1
                if grid[i][j-1] == 0:
                    prem += 1
                if grid[i+1][j] == 0:
                    prem += 1
                if grid[i-1][j] == 0:
                    prem += 1
    return prem
