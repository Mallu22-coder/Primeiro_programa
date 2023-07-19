# Primeiro_programa
#include <stdio.h>
int main(void)
{

  int tipo, escolha, tabajara;
  float valor, quantidade, desconto;

  system("cls");

  printf(" codigo     tipo         ate 5kg          acima de 5 kg  \n");
  printf("  321      file duplo   R$ 4,90kg         R$5,80kg       \n");
  printf("  322      alcatra      R$ 5,90kg         R$6,80kg       \n");
  printf("  323      picanha      R$ 6,90kg         R$7,80kg       \n");

  printf("Escolha o tipo de carne: ");
  scanf("%d", &escolha);

  printf("Pagamento sera no cartao tabajara, se sim (1) se nao (2): \n");
  scanf("%d", &tabajara);
  if (tabajara == 1)
  {

    if (escolha == 321)
    {
      printf("Digite quantos kg: ");
      scanf("%f", &quantidade);

      if (quantidade <= 5)
      {
        valor = quantidade * 4.90;
        desconto = valor - (valor * 0.10);
        printf("tipo de carne: file duplo  \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);

        printf("Valor total a pagar com desconto do cartao: %.2f \n", desconto);
      }
      else if (quantidade > 5)
      {
        valor = quantidade * 5.80;
        desconto = valor - (valor * 0.10);
        printf("tipo de carne: file duplo \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("Valor total a pagar com desconto do cartao: %.2f", desconto);
      }
    }
    if (escolha == 322)
    {
      printf("Digite quantos kg: ");
      scanf("%f", &quantidade);

      if (quantidade <= 5)
      {
        valor = quantidade * 5.90;
        desconto = valor - (valor * 0.10);
        printf("tipo de carne: alactra \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("Valor total a pagar com desconto do cartao:%2.f", desconto);
      }
      if (quantidade > 5)
      {
        valor = quantidade * 6.80;
        desconto = valor - (valor * 0.10);
        printf("tipo de carne: alcatra \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("Valor total a pagar com desconto do cartao: %2.f", desconto);
      }
    }
    if (escolha == 323)
    {
      printf("Digite quantos kg: ");
      scanf("%f", &quantidade);

      if (quantidade <= 5)
      {
        valor = quantidade * 6.90;
        desconto = valor - (valor * 0.10);
        printf("tipo de carne: picanha \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("Valor total a pagar com desconto do cartao: %2.f", desconto);
      }
      if (quantidade > 5)
      {
        valor = quantidade * 7.80;
        desconto = valor - (valor * 0.10);
        printf("tipo de carne: picanha \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("Valor total a pagar com desconto do cartao: %2.f", desconto);
      }
    }
  }
  else if (tabajara == 2)
  {
    if (escolha == 321)
    {
      printf("Digite quantos kg: ");
      scanf("%f", &quantidade);

      if (quantidade <= 5)
      {
        valor = quantidade * 4.90;
        printf("tipo de carne: file duplo \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("desconto do cartao: 0");
      }
      else if (quantidade > 5)
      {
        valor = quantidade * 5.80;
        printf("tipo de carne: file duplo \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("desconto do cartao: 0");
      }
    }
    if (escolha == 322)
    {
      printf("Digite quantos kg: ");
      scanf("%f", &quantidade);

      if (quantidade <= 5)
      {
        valor = quantidade * 5.90;
        printf("tipo de carne: alcatra \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("desconto do cartao: 0");
      }
      if (quantidade > 5)
      {
        valor = quantidade * 6.80;
        printf("tipo de carne: alcatra \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("desconto do cartao: 0");
      }
    }
    if (escolha == 323)
    {
      printf("Digite quantos kg: ");
      scanf("%f", &quantidade);

      if (quantidade <= 5)
      {
        valor = quantidade * 6.90;
        printf("tipo de carne: picanha \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("desconto do cartao: 0");
      }
      if (quantidade > 5)
      {
        valor = quantidade * 7.80;
        printf("tipo de carne: picanha \n");
        printf("quantos kg: %.2f \n", quantidade);
        printf("valor total a pagar: %.2f \n", valor);
        printf("desconto do cartao: 0");
      }
    }
  }
  return 0;
}
