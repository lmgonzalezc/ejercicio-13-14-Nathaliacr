import os
import numpy as np
import matplotlib.pyplot as plt


data = np.loadtxt("datos.dat")
plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("plot.png")

data2 = np.loadtxt("datos2.dat")
diff=np.fabs(data[:,1]-data2[:,1])+0.000001
difflog=np.log(diff)
plt.figure()
plt.subplot(2,2,1)
plt.plot(data[:,0], diff)
plt.subplot(2,2,2)
plt.plot(data[:,0], difflog)
plt.savefig("plotdiff.png")


data3 = np.loadtxt("datos3.dat")
plt.figure()
plt.plot(data3[:,0], data3[:,1])
plt.savefig("plotf.png")

data4 = np.loadtxt("datos4.dat")
Fdiff=np.fabs(data3[:,1]-data4[:,1])+0.000001
Fdifflog=np.log(Fdiff)
plt.figure()
plt.subplot(2,2,1)
plt.plot(data3[:,0], Fdiff)
plt.subplot(2,2,2)
plt.plot(data3[:,0], Fdifflog)
plt.savefig("plotFdiff.png")

data5 = np.loadtxt("datos5.dat")
plt.figure()
plt.plot(data5[:,0], data5[:,1])
plt.savefig("plotbifurc.png")
