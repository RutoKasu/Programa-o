valor_disponivel = 0
opcao = 0
banco_nomes = ("Inter","Nubank","Banco do Brasil","Itáu","Bradesco")
print("-- Menu Banco --")
index = int(input("Digite o número relacionado ao seu banco:\n[1] Inter\n[2] Nubank\n[3]BB\n[4] Itáu\n[5] Bradesco\n ")) - 1
while True:
    print(f"O banco selecionado foi o banco {banco_nomes[index]}")
    print("[1] Sacar\n[2] Deposito\n[3] Ver saldo\n[0] Sair do Banco")
    opcao = int(input("Digite Sua opção:"))
    match opcao:
        case 1:
            print("\n--- Sacar ---")
            print(f"Valor disponivel para saque: {valor_disponivel}")
            saque = int(input("Quanto deseja sacar:"))
            if saque <= valor_disponivel and saque >= 0:
                valor_disponivel -= saque
                print(f"Valor do saque foi de R${saque}.\nValor disponivel: R${valor_disponivel}")
            else:
                print("Saque indisponivel: dinheiro indisponivel")
            continue
        case 2:
            print("\n--- Deposito ----")
            print(f"valor disponivel: {valor_disponivel}")
            deposito = int(input("Qual o valor do Deposito: "))
            valor_disponivel += deposito
            print(f"O valor do deposito: {deposito}")
            print(f"O valor disponivel: {valor_disponivel}")
            continue
        case 3:
            print("\n--- Saldo ---")
            print(f"O valor disponivel: R${valor_disponivel}")
            continue
        case 0:
            print("Programa Finalizado!")
            break
