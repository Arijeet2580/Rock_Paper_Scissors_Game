def gameWin(comp, you):
    if comp == you:
        return None
    elif comp == 's':
        if you == 'p':
            return False
        elif you == 'r':
            return True
    elif comp == 'p':
        if you == 'r':
            return False
        elif you == 's':
            return True
    elif comp == 'r':
        if you == 's':
            return False
        elif you == 'p':
            return True
print("***********\nComputer's Turn: Rock(r) Paper(p) Scissor(s) ?\n**********")
import random
randNo = random.randint(1, 3)
if randNo == 1:
    comp = 'r'
elif randNo == 2:
    comp = 'p'
elif randNo == 3:
    comp = 's'
print("Computer has chosen ")
you = input("********\nYour Turn: Rock(r) Paper(p) Scissor(s) ?\n********\n")
a = gameWin(comp, you)
print(f"Computer chose {comp}")
print(f"You chose {you}")
if a == None:
    print("The game ended in a draw!")
elif a == True:
    print("Hurray!!!You Won the game!")
else:
    print("You Lost the game!Better luck next time")
