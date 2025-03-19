print("Calcular fatorial")

num = input("Digite um número que deseja fatorar: ")

if num.isnumeric() and int(num) >= 0:
    fatorial = 1
    num = int(num)
    while num > 1:
        fatorial *= num
        num -= 1
    
    print(fatorial)