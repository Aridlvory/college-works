# Write a Python programme that takes two linear equations in the form ax + by = c and dx + ey = f as input and determines if the system has a unique solution. If it does, return the values of x and y. If not, indicate that there is no unique solution.

import numpy as np

equation1 = input("Enter the first equation in the form ax + by = c: ").split()
equation2 = input("Enter the second equation in the form dx + ey = f: ").split()

a = eval(equation1[0][:-1])
b = eval(equation1[2][:-1])
c = eval(equation1[4])
d = eval(equation2[0][:-1])
e = eval(equation2[2][:-1])
f = eval(equation2[4])

A = np.array([[a,b],[d,e]])
B = np.array([c,f])

print(A)
print(B)

if np.linalg.matrix_rank(A) == A.shape[1]:
    solution = np.linalg.solve(A, B)
    print("Solution:")
    print("x =", solution[0])
    print("y =", solution[1])

else:
    print("There is no Unique Solution")
