# For the trigonomrtric function h(x)=sin2x+cosx, develop a python programme for the following.
# a. Plot the function for 0<=x<=2pi
# b. Highlight the amplitude, period and any point of intersection with the x-axis
# c. Label the axes and provide a title for the plot.

import matplotlib.pyplot as pl
import numpy as n
X = n.linspace(0,2*n.pi,1000)
def f(X): return n.sin(2*X) + n.cos(X)
pl.plot(X,f(X),label=r'$h(x) = \sin(2x) + \cos(x)$')
pl.axhline(color="red")
pl.axvline(color="black")
amplitude = (n.max(f(X)) - n.min(f(X)))/2
period = 2 * n.pi
zero_crossings = n.where(n.diff(n.sign(f(X))))[0]
pl.scatter(X[zero_crossings], f(X)[zero_crossings], color='red', zorder=5, label='Intersections')
pl.axhline(y=amplitude, color='g', linestyle='--', xmin=0.05, xmax=0.95, label='Amplitude')

pl.xlabel('x')
pl.ylabel('h(x)')
pl.title('Plot of the function h(x) = sin(2x) + cos(x)')

pl.legend()
pl.show()
