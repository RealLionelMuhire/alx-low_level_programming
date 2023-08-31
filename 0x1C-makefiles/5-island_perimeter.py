#!/usr/bin/python3
"""Find island perimenter"""


def island_perimeter(grid):
    """Find the island of the perimeter"""
    tmp = 0
    height, width = 0, 0
    for row in grid:
        for i in row:
            if i == 1:
                tmp += 1
        if tmp > height:
            height = tmp

    i = 0
    tmp = 0
    while i < 100:
        j = 0
        while j < len(grid[0]):
            if grid[j][i] == 1:
                tmp += 1
        if tmp > width:
            width = tmp
    return 2*(height + width)
