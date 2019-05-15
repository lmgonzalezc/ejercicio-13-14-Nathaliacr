import numpy as np
import matplotlib.pyplot as plt

import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("datos.dat")


theta = data[:,1]
t = data[:,0] 

plt.figure()
plt.plot(t,theta)
plt.savefig("fig.png")