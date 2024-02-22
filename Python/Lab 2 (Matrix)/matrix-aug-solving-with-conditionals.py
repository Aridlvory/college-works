# Develop a Python programme that accepts an arbitrary-sized matrix representing a system of linear equations (Ax = B) and returns the solution vector x if a unique solution exists. Handle cases where there is no solution or infinitely many solutions

import numpy as np

A = np.array(eval(input("Enter Coefficient Matrix: ")))
B = np.array(eval(input("Enter Column Vector: ")))
Aug = np.concatenate((A,[B]))

if not np.any(B):
    if np.linalg.matrix_rank(A) == A.shape[1]:
        solution = np.linalg.solve(A, B)
        print("Solution:")
        print("x =", solution[0])
        print("y =", solution[1])
    
    else:
        print("This Matrix has Infinite Solution")
else:
    if np.linalg.matrix_rank(Aug) != np.linalg.matrix_rank(A):
        print("The System is Inconsistent (No Solution)")
    else:
        if np.linalg.matrix_rank(A) == A.shape[1]:
            solution = np.linalg.solve(A, B)
            print("Solution:")
            print("x =", solution[0])
            print("y =", solution[1])
        
        else:
            print("This Matrix has Infinite Solution")
