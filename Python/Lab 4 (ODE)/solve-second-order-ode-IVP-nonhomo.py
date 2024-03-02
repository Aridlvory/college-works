# Write a Python program to solve the second Order Linear Non-Homogeneous Ode With Constant Coefficients.

import sympy as sp

#Define Symbols and Function
t = sp.Symbol('t')
C1, C2 = sp.symbols('C1 C2')

y = sp.Function('y')

#inputting Coefficients
# Format: dy^2/dt^2 + a*dy/dt + b*y = c(t)
a = int(input('Enter the value of a:')) #2
b = int(input('Enter the value of b:')) #1
c = eval(input('Enter the value of c:')) #sp.sin(t)
#inputting values
yi = int(input('Enter Value of y(i): ')) #1
y_primei = int(input('Enter Value of y`(i): ')) #0
i = int(input('Enter Value of i: ')) #0

#Create Eq
ode = sp.Eq(sp.diff(y(t), t, t) + a*sp.diff(y(t), t) + b*y(t), c)
i_cs = {y(t).subs(t, i): yi, y(t).diff(t).subs(t, i): y_primei}
#Solving
general_solution = sp.dsolve(ode, ics=i_cs)
general_solution
