'''
Matheus da Silva - 20/08/2023
Diciplina: Sistemas Operacionais
'''

from tkinter import *
# import cmath
# import numpy as np

def tabela():
    cod = ''
    while cod == '':
        cod = entry.get()
        if not cod.isdigit():
            lb_erro['text'] = 'Digite somente numero!'
            print('\nDigite somente numero!\n')
            break
        else:
            converte_cod = int(cod)
            valor = chr(converte_cod)
            lb_resultado['text'] = ' O codigo ' + str(cod) + ' na Tabela ASCII recebe o simbolo: ' + str(valor)
            print(f'O codigo "{cod}" é de simbolo na Tabela é: ', f'{valor}')
            cod = 'x'
            lb_erro['text'] = ''



def limpar():
    entry.delete(0, 'end')
    lb_resultado['text'] = ''
    lb_erro['text'] = ''


app = Tk()
app.title('Tabela ASCII')
app.geometry('450x300')

frame = LabelFrame(app, text='Tabela ASCII', borderwidth=1, relief='solid')
frame.place(relheight=1, relwidth=1)

lb_instrucao = Label(frame, text='Imprimindo o simbolo da tabela ASCII', font=('Arial', 14))
lb_instrucao.place(x=10, y=10)

lb_titulo = Label(frame, text='Digite um numero: ', font=('Arial', 12))
lb_titulo.place(x=10, y=50)
entry = Entry(frame, font=('Arial', 12))
entry.place(x=15, y=80)

btn_mostrar = Button(frame, text='Mostrar', font=('Arial', 12), command=tabela)
btn_mostrar.place(x=10, y=120)

btn_limpar = Button(frame, text='Limpar', font=('Arial', 12), command=limpar)
btn_limpar.place(x=100, y=120)

lb_resultado = Label(frame, text='', font=('Arial', 12))
lb_resultado.place(x=15, y=180)

lb_erro = Label(frame, text='', font=('Arial', 12))
lb_erro.place(x=15, y=180)


app.mainloop()
