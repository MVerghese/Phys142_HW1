import pylab

for i in range (0,3):
	data=pylab.loadtxt("out" + str(i) + ".txt")
	pylab.plot(data[:,0],data[:,1])
	pylab.legend()
	pylab.title("Translated Psi Vector after " + str(i*8) + " timesteps")
	pylab.xlabel("Time (s)")
	pylab.ylabel("Probability")
	pylab.savefig("output" + str(i) + ".png")
