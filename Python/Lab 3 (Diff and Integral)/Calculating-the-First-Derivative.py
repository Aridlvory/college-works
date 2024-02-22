# Write a python program to determine the first derivative of the function 𝑓(𝑥) with respect to 𝑥.

import sympy as sy

x = sy.Symbol('x')
func = input("f(x): ")
derv = sy.Derivative(func,x).doit()

print("f'(x): ",derv)
