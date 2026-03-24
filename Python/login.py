i = 3
while True:
    usuario = input("Digite o usuario: ")
    senha = int(input("Digite uma senha: "))
    if i>1:
        if usuario == "adm" and senha ==12345678:
            print("Acesso liberado!")
            break
        else:
            print("Acesso negado!")
            i -=1 
            continue
    else:
        print("Tentativas zeradas \n Programa finalizando...")
        break
