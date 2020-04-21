#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  choinka.py


def main(args):
    for i in range(9):
        for j in range(i+1):
            print("*", end="")
        print()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
