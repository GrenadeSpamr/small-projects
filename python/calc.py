# Python Calculator
import os

def menu():
	os.system('cls'); os.system('clear')
	cool()
	print ("Python Calculator")
	print ("Type add/sub/div/mul for self-explanatory functions.")
	pause()

def pause():
	while True:
		sel = str(input("Input selection: "))
	
		if sel == str("add"):
			add()
			break
		elif sel == "sub":
			sub()
			break
		elif sel == "div":
			div()
			break
		elif sel == "mul":
			mul()
			break
		else:
			menu()
			print ("Invalid selection.") # This doesn't print.
			break

def pause2():
	cool()
	print ("Python Calculator")
	pause()

def cool():
	print ("-----------------")

def add():
	cool()
	print ("Addition Calculator")
	add1 = int(input("Input first value: "))
	add2 = int(input("Input second value: "))
	print ("Result is =", add1 + add2)
	pause2()

def sub():
	cool()
	print ("Subtraction Calculator")
	sub1 = int(input("Input first value: "))
	sub2 = int(input("Input second value: "))
	print ("Result is =", sub1 - sub2)
	pause2()

def div():
	cool()
	print ("Division Calculator")
	div1 = int(input("Input first value: "))
	div2 = int(input("Input second value: "))
	print ("Result is =", div1 / div2)
	pause2()

def mul():
	cool()
	print ("Multiplication Calculator")
	mul1 = int(input("Input first value: "))
	mul2 = int(input("Input second value: "))
	print ("Result is =", mul1 * mul2)
	pause2()

menu()

