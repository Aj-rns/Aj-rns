std={
  "student": "Ajay kumar",
  "subject" : {
    "phy": 98,
    "chem" : 78,
    "maths" : 88,
  }
}
#print(len(list(std.keys())))
#print(list(std.values()))
#print(std.items())

#print(std["student1"])##error
#print(std.get("student1"))#no error ->None
new_std={"city": "delhi", "age" : 23}
std.update(new_std)
print(std)

