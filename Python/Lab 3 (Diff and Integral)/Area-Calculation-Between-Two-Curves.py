# Write a python program to find area between two given curves

import sympy as sy

x = sy.Symbol('x')

fx = sy.sympify(input('f(x): '))
gx = sy.sympify(input('g(x): '))

intersects = sy.solve(fx - gx, x)

if len(intersects) == 2:
    a, b = intersects[0], intersects[1]
else:
    print("No intersection points found.")
    
a = sy.integrate(fx, (x,a,b))
b = sy.integrate(gx, (x,a,b))

print("Area = ", abs(a-b))
