#Write a Python program to solve the following second Order Linear Homogeneous Ode With Constant Coefficients.
from sympy import symbols, Function, Eq, dsolve

#Define Symbols and Function
t = symbols('t')
y = Function('y')

#inputting Coefficients
a = float(input("Enter Coefficient of y'': "))
b = float(input("Enter Coefficient of y': "))
c = float(input("Enter Coefficient of y: "))
#Create Eq
ode = Eq(a*y(t).diff(t, t) + b*y(t).diff(t) + c*y(t), 0)
#Solving
solution = dsolve(ode, y(t))
print("Solution to the second-order ODE:")
solution
