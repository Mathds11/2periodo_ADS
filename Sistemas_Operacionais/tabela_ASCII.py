'''
Matheus da Silva - 19/08/2023
'''
print('\nImprimindo a tabela ASCII\n')
cod = ''
while cod == '':
    cod = input('\nDigite um numero ou uma letra para sair: ')
    if not cod.isdigit():
        print('\nVoce saiu do programa!\n')
        break
        
    else:
        converte_cod = int(cod)
        print(f'O codigo "{cod}" é de simbolo na Tabela é: ', chr(converte_cod))
        cod = ''