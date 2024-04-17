# Unit Step Function with Upper Limit
import sympy as sp
from sympy.abc import s, t, x

def L(f):
    return sp.laplace_transform(f, t, s, noconds=True)
def invL(F):
    return sp.inverse_laplace_transform(F, s, t)

f = eval(input("f(t): "))
up = eval(input("Upper Limit: "))
u = sp.Heaviside(t-up)
f_step = u * f
lapl = L(f_step)
lapl
