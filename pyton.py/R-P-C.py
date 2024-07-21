import random
myscore=0
yourscore=0
coup=True
while coup:
    while choix!='C' or choix!='F' or choix!='P':
        choix=str(input("choisissez votre coup:"))
    choix2=random.random('P','F','C')
    if choix==choix2:
        print("DRAW")
        choix3=str(input("you want to continue or not"))
        if choix3=='n':
            coup==False
        else:
            coup==True
    elif choix=='P' and choix2=='F' or choix=='F' and choix2=='C' or choix=='C' and choix2=='P':
        print("YOU LOSE")
        myscore=myscore+1
        choix3=str(input("you want to continue or not"))
        if choix3=='n':
            coup==False
        else:
            coup==True
    else:
        print("YOU WON")
        yourscore=yourscore+1
        choix3=str(input("you want to continue or not"))
        if choix3=='n':
            coup==False
        else:
            coup==True
if coup==False:
    print("YOU:",yourscore,"ME:",myscore)
    print("GAME OVER")