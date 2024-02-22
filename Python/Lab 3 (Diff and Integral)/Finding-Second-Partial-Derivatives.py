# How can we calculate the second partial derivatives of the function 𝑧 = 𝑓(𝑥, 𝑦) with respect to both 𝑥 and 𝑦 using python program

import sympy as sy

x = sy.Symbol("x")
y = sy.Symbol("y")
func = input("f(x,y): ")

pdervx = sy.Derivative(func,x).doit()
spdervx = sy.Derivative(pdervx,x).doit()

pdervy = sy.Derivative(func,y).doit()
spdervy = sy.Derivative(pdervy,y).doit()

spdervxy = sy.Derivative(pdervx,y).doit()
spdervyx = sy.Derivative(pdervy,x).doit()

print("fx''(x,y): ",spdervx)
print("fy''(x,y): ",spdervy)
print("fxy''(x,y): ",spdervxy)
print("fyx''(x,y): ",spdervyx)
