import random

listaPalavras = ["carro", "bolas", "motor", "canto", "tigre", "piano", "luzes", "relva", "visto", "dolar"]
palavraSecreta = random.choice(listaPalavras)
vida = 5
letrasChutadas = set()

print("Palavra secreta!")
print("Você deve inserir letras para construir a palavra secreta. Porém, se errar a letra, perde 1 vida")
print(f"Você tem {vida} vidas")
print("")

print("_ _ _ _ _")
inputLetra = input("Digite uma letra: ")

if not(inputLetra.lower() in letrasChutadas):
    letrasChutadas.add(inputLetra.lower())

    if inputLetra in palavraSecreta: