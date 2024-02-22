# How can we calculate and visually represent the area between the curve 𝑦 = 𝑓(𝑥) and x-axis using python program?

import numpy as np
import matplotlib.pyplot as plt
import sympy as sy
from scipy.integrate import quad

def f(x):
    return np.sin(x) # Change the equation here

x_values = np.linspace(0, 2*np.pi, 100) # Change limits here (low, up, count)
y_values = f(x_values)

area, _ = quad(f, 0, 2*np.pi) #Change limits here (func, low, up)

plt.plot(x_values, y_values, label='y = f(x)')
plt.fill_between(x_values, y_values, color='skyblue', alpha=0.5, label='Area')

plt.xlabel('x')
plt.ylabel('y')
plt.title('Area under the curve y = f(x)')
plt.legend()

plt.grid(True)
plt.text(1, 1, 'Area = {:.2f}'.format(area), fontsize=12, bbox=dict(facecolor='white', alpha=0.5))
plt.show()
