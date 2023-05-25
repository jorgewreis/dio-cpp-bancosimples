#include <stdio.h>

// Conta Salário
struct ContaSalario {
    float saldo;
};

// Conta Investimento
struct ContaInvestimento {
    float saldo;
};

// Função para sacar da conta salário
void sacarContaSalario(struct ContaSalario* conta, float valor) {
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("Saque de R$ %.2f realizado na conta salário.\n", valor);
    } else {
        printf("Saldo insuficiente na conta salário.\n");
    }
}

// Função para sacar da conta investimento
void sacarContaInvestimento(struct ContaInvestimento* conta, float valor) {
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("Saque de R$ %.2f realizado na conta investimento.\n", valor);
    } else {
        printf("Saldo insuficiente na conta investimento.\n");
    }
}

int main() {
    // Criação das contas
    struct ContaSalario contaSalario;
    struct ContaInvestimento contaInvestimento;
    
    // Definição dos saldos iniciais
    contaSalario.saldo = 1000.0;
    contaInvestimento.saldo = 5000.0;
    
    // Realiza saques
    sacarContaSalario(&contaSalario, 500.0);
    sacarContaInvestimento(&contaInvestimento, 3000.0);
    
    return 0;
}
