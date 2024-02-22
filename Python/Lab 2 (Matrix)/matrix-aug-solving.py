# Write a Python programme that takes a matrix representing a system of two linear equations in the form Ax = B, where A is a coefficient matrix and B is a column vector. Determine if the system has no solution and return an appropriate message.

import numpy as np

A = eval(input("Enter Coefficient Matrix: "))
B = eval(input("Enter Column Vector: "))

if np.linalg.det(A) == 0:
    print("The System is Inconsistent")
else:
    print("The Solution is: ")
    solution = np.linalg.solve(A, B)
    print("x =", solution[0])
    print("y =", solution[1])
