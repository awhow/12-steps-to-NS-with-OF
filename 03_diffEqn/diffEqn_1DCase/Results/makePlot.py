#!/usr/bin/env python

import os
import numpy as np
import matplotlib.pyplot as plt

stepNoList = np.array([0,2,5,15,30])

def plotTime(stepNo):
    dataFile = 'Udata.' + str(stepNo) + '.csv'
    data = np.loadtxt(dataFile,delimiter=',',skiprows=1)
    U = data[:,0]
    x = data[:,5]
    plt.plot(x,U,label="Step " + str(stepNo),lw=2)

for stepNo in stepNoList:
    plotTime(stepNo)

plt.ylim(1,2.1)
plt.legend(loc='best')
#plt.show()

plt.title('1D Diffusion')
plt.savefig('plot.svg')
plt.close('all')
