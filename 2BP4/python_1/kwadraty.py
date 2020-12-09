#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kwadraty.py
import turtle


def kwadrat(bok):
    for i in range(4):
        turtle.forward(bok)
        turtle.left(90)


def kwadraty(ile, bok, krok):
    for i in range(ile):
        print(i)
        kwadrat(bok + krok * i)


def gwiazda():
    for i in range(5):
        turtle.forward(100)
        turtle.right(144)


def gwiazdy(ile, bok, krok):
    pass


def kolo():
    turtle.penup()
    turtle.setpos(0, -100)
    turtle.pendown()
    turtle.circle(100)


def kola(ile, r, krok):
    pass


def main(args):
    turtle.setup(800, 600)
    turtle.color("green")
    turtle.pensize(2)
    # kwadraty(4, 100, 20)
    # gwiazda()
    kolo()
    turtle.done()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
