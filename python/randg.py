# Random Number Generator Fun

import random
import time

def rthres():
	thresgen = [' ']
	thresg = random.randrange(1,400)
	thresgen.append(thresg)

def randg():
	rand = random.randrange(1,400)
	rthreshold = random.choice(thresgen[''])
	print (rand, '>', rthreshold)

rthres()
randg()
