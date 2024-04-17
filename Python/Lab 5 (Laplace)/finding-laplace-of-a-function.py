#  Finding Laplace of a function

import sympy as sp
from sympy.abc import s, t, x

def L(f):
    return sp.laplace_transform(f, t, s, noconds=True)
def invL(F):
    return sp.inverse_laplace_transform(F, s, t)

f = eval(input("f(t): "))
F = L(f)
F
