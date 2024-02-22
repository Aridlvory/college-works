# Write a python program to find the third derivative of the function 𝑦 = 𝑓(𝑥) with respect to 𝑥.

import sympy as sy

x = sy.Symbol("x")
func = input("f(x): ")
fderv = sy.Derivative(func,x).doit()
sderv = sy.Derivative(fderv,x).doit()
tderv = sy.Derivative(sderv,x).doit()

print("f'''(x): ",tderv)
