import pylab
data=pylab.loadtxt("out.txt")
pylab.plot(data[:,0],data[:,1])
pylab.legend()
pylab.title("Initial PSI vector")
pylab.xlabel("Time (s)")
pylab.ylabel("Position (m)")
pylab.savefig("output.png")