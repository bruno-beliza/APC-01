#include <stdio.h>
#include <string.h>

int main()
{
    struct endereco_t
    {
        char logradouro[61];
        int numero;
        char bairro[41];
        char cidade[41];
        char uf[3];
        int cep;

    };

    struct cliente_t
    {
        char nome[101];
        long long int telefone;
        char email[101];
        struct endereco_t endereco;
    };

    struct cliente_t cliente;

    struct fornecedor_t
    {

        struct endereco_t endereco;
    };

    strcpy(cliente.nome, "Jesse Jascente");
    cliente.telefone = 61999099909;
    strcpy(cliente.email, "teste@test.com");
    strcpy(cliente.endereco.logradouro, "SQS");
    cliente.endereco.numero = 762;
    strcpy(cliente.endereco.bairro, "Asa Sul");
    strcpy(cliente.endereco.cidade, "Brasilia");
    strcpy(cliente.endereco.uf, "DF");
    cliente.endereco.cep = 70700700;

    struct cliente_t clientes[10];

    for (int i = 0; i < 2; i++)
    {
        printf("====> Dados do Cliente: %i <====\n", i + 1);
        printf("Nome: ");
        scanf("%[^\n]s", clientes[i].nome);
        while(getchar()!='\n');
        printf("Telefone: ");
        scanf("%lli", &clientes[i].telefone);
        while(getchar()!='\n');
        printf("E-mail: ");
        scanf("%[^\n]s", clientes[i].email);
        while(getchar()!='\n');
        printf("Endereco: \n");
        printf("Logradouro: ");
        scanf("%[^\n]s", clientes[i].endereco.logradouro);
        while(getchar()!='\n');
        printf("Numero: ");
        scanf("%i", &clientes[i].endereco.numero);
        while(getchar()!='\n');
        printf("Bairro: ");
        scanf("%[^\n]s", clientes[i].endereco.bairro);
        while(getchar()!='\n');
        printf("Cidade: ");
        scanf("%[^\n]s", clientes[i].endereco.cidade);
        while(getchar()!='\n');
        printf("UF: ");
        scanf("%[^\n]s", clientes[i].endereco.uf);
        while(getchar()!='\n');
        printf("CEP: ");
        scanf("%i", &clientes[i].endereco.cep);
        while(getchar()!='\n');
    }

    printf("\n====> Clientes do momento: <====");

    for (int i = 0; i < 2; i++)
    {
        printf("\nDados do Cliente: %i\n", i + 1);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Telefone: %lli\n", clientes[i].telefone);
        printf("E-mail: %s\n", clientes[i].email);
        printf("Endereco: \n");
        printf("Logradouro: %s\n", clientes[i].endereco.logradouro);
        printf("Numero: %i\n", clientes[i].endereco.numero);
        printf("Bairro: %s\n", clientes[i].endereco.bairro);
        printf("Cidade: %s\n", clientes[i].endereco.cidade);
        printf("UF: %s\n", clientes[i].endereco.uf);
        printf("CEP: %i\n", clientes[i].endereco.cep);
    }

    return 0;
}