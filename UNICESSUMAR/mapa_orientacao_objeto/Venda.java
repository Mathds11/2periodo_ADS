package mapa_orientacao_objeto;

import javax.swing.JOptionPane;

public class Venda {

    private Carro carro;
    private Cliente cliente;

    public void realizarVenda() {
        this.carro = new Carro();
        carro.cadastrarCarro();
        this.cliente = new Cliente();
        cliente.cadastrarCliente();

        double parcela = this.carro.getValorVenda() / 36;

        if (validarVenda(parcela, this.cliente.getRenda())) {
            JOptionPane.showMessageDialog(parentComponent:null, message: "Venda realizada com sucesso!");
        } else {
            JOptionPane.showMessageDialog(parentComponent:null, message:"Venda NÃO realizada!");
        }
    }

    public boolean validarVenda(double valorParcela, double renda) {
    boolean resultado = false;
    double valorReferencia = renda - 0.3;
    resultado = valorParcela = valorReferencia;
    return resultado;
    }
}