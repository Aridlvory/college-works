# Write a Python program to solve the second Order Cauchy Euler Ode With Constant Coefficients (Homogeneous Only).
import sympy as sp

#Define Symbols and Function
t = sp.Symbol('t')
y = sp.Function('y')

#inputting Coefficients
# Format: a*t^2*dy^2/dt^2 + b*t*dy/dt + c*y = 0
a = float(input('Enter the value of a: ')) #1
b = float(input('Enter the value of b: ')) #-4
c = float(input('Enter the value of c: ')) #6
yi = float(input('Enter the value of y(i): ')) #2
y_primei = float(input('Enter the value of y`(i): ')) #1
i = float(input('Enter Value of i: ')) #1

#Create Eq
ode = sp.Eq(a*t**2 * y(t).diff(t, t) + b*t * y(t).diff(t) + c * y(t), 0)
ics = {y(t).subs(t, i): yi, y(t).diff(t).subs(t, i): y_primei}
#Solving
solution = sp.dsolve(ode, y(t), ics=ics)

print("Solution:")
solution
