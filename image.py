import pylab
data=pylab.loadtxt("out.txt")
pylab.plot(data[:,0],data[:,1])
pylab.legend()
pylab.title("Initial PSI vector")
pylab.xlabel("Time (s)")
pylab.ylabel("Probability")
pylab.savefig("output.png")
