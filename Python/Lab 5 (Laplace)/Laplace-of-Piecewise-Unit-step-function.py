#  Laplace of Piecewise Unit step function
import sympy as sp
from sympy.abc import s, t, x

def L(f):
    return sp.laplace_transform(f, t, s, noconds=True)
def invL(F):
    return sp.inverse_laplace_transform(F, s, t)

n = int(input("No of Pieces: "))
func = eval("0")
for i in range(n):
    f = eval(input("f(t): "))
    up = eval(input("Upper Limit: "))
    lo = eval(input("Lower Limit: "))
    u = sp.Heaviside(t-up)
    if lo == 0:
        l = 1
        f_step = (l * f) - (u * f)
    elif lo == None:
        f_step = (u*f)
    else:
        l = sp.Heaviside(t-lo)
        f_step = (l * f) - (u * f)
    func += f_step
lapl = L(func)
lapl
