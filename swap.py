# on saisit x et y
x = int(input("x : "))
y = int(input("y : "))
# on va swap x et y avec la variable tmp
tmp = x
x = y
y = tmp
# puis on imprime le resultat du swap
print(f" x vaut {x} et y vaut {y}")