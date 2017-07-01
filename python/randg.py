# Random Number Generator Fun

import random
import time

def randg():
	rand = random.randint(1, 20)
	rthreshold = 10
	if rand > rthreshold:
		print (rand, 'was greater than', rthreshold)
	else:
		print (rand, 'was less than', rthreshold)
	time.sleep(1)
	randg()

randg()

# An experimental idea, don't expect anything
# Might use this for an RPG in the future
