# on saisit x, y et z
x = int(input("x : "))
y = int(input("y : "))
z = int(input("z : "))
# on va voir avec des if et if else si quel nombre est le plus grand 
if x > y and x > z:
    print(f"x = {x} est plus grand que y et z")
elif y > x and y > z:
    print(f"y = {y} est plus grand que x et z")
elif z > x and z > y: 
    print(f"z = {z} est plus grand que x et y")