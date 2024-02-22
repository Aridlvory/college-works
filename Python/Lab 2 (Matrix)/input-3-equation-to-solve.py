#  Create a Python programme that can handle a system of three linear equations in three variables (ax + by + cz = d, ex + fy + gz = h, and ix + jy + kz = l) and has infinitely many solutions in terms of parameters.

import numpy as np

equation1 = input("Enter the first equation in the form ax + by + cz = d: ").split()
equation2 = input("Enter the second equation in the form ex + fy + gz = h: ").split()
equation3 = input("Enter the second equation in the form ix + jy + kz = l: ").split()

a = eval(equation1[0][:-1])
b = eval(equation1[2][:-1])
c = eval(equation1[4][:-1])
d = eval(equation1[6])
e = eval(equation2[0][:-1])
f = eval(equation2[2][:-1])
g = eval(equation2[4][:-1])
h = eval(equation2[6])
i = eval(equation3[0][:-1])
j = eval(equation3[2][:-1])
k = eval(equation3[4][:-1])
l = eval(equation3[6])


A = np.array([[a,b,c],[e,f,g],[i,j,k]])
B = np.array([d,h,l])

if np.linalg.matrix_rank(A) < A.shape[1]:
    #infinite
    print ("There is infinite solution")
else:
    solution = np.linalg.solve(A, B)
    print("Solution:")
    print("x =", solution[0])
    print("y =", solution[1])
    print("z =", solution[2])
