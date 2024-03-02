# Write a Python program to solve the following second Order Linear Homogeneous Ode With Constant Coefficients (IVP).

from sympy import symbols, Function, dsolve, solve

#Define Symbols and Function
t = symbols('t')
y = Function('y')
#inputting Coefficients
a = float(input("Enter Coefficient of y'': "))
b = float(input("Enter Coefficient of y': "))
c = float(input("Enter Coefficient of y: "))
#Create Eq
ode = a*y(t).diff(t, t) + b*y(t).diff(t) + c*y(t)
#Solving
solution = dsolve(ode)
#inputting values
y0 = float(input("Enter value of y(i): "))
y1 = float(input("Enter value of y'(i): "))
i = float(input("Enter the value of i: "))
#Create Eq
C1, C2 = symbols('C1 C2')
ics = {solution.rhs.subs(t, i): y0, solution.rhs.diff(t).subs(t, i): y1}
constants = solve([sol - val for sol, val in ics.items()], (C1, C2))
#Solving
solution = solution.subs(constants)

print("Solution to the second-order ODE (IVP):")
solution
