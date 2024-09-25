#print the element of the folling list using a loop[1,4,9,16,25,36,49,64,81,100]

# num=[1,4,9,16,25,36,49,64,81,100]
# for val in num:
#   print(val)

#search for a number x in this tuple using loop [1,4,9,16,25,36,49,64,81,100]

num=(1,4,9,16,25,9,49,64,9,100)

x=int(input("ENTER THE NUMBER : "))

idx =0
for val in num:
  if(val==x):
    print("number is found at idx :",idx)
  idx += 1