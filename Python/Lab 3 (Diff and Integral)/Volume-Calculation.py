# Write a python program to find volume of a given surface

from sympy import symbols, integrate

x, y = symbols('x y')

def surface_function(x, y):
    return x**2 + y**2

x_min, x_max = 0, 2  
y_min, y_max = 0, 2

volume = integrate(surface_function(x, y), (x, x_min, x_max), (y, y_min, y_max))

print("Volume of the surface:", volume)
