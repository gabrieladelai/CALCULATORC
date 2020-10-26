#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int opcao_matrizes() {
    int opcao;
    
    printf("1 - Soma \n");
    printf("2 - SubtraçãoL \n");
    printf("3 - Produto \n");
    printf("4 - Voltar \n");
    
    printf(" * DIGITE A OPCAO QUE DESEJA: ");
    scanf("%d", &opcao);
    
    return opcao;
}

void matrizes() {
    int a11, a12, a21, a22;
    int b11, b12, b21, b22;
    
    int opcao = opcao_matrizes();
    
    printf("a11: ");
    scanf("%d", &a11);
    printf("a12: ");
    scanf("%d", &a12);
    printf("a21: ");
    scanf("%d", &a21);
    printf("a22: ");
    scanf("%d", &a22);
    printf("b11: ");
    scanf("%d", &b11);
    printf("b12: ");
    scanf("%d", &b12);
    printf("b21: ");
    scanf("%d", &b21);
    printf("b22: ");
    scanf("%d", &b22);
    
    printf("\nRESULTADO:\n");
    
    switch(opcao) {
        case 1:
            printf("c11: %d\n", a11 + b11);
            printf("c12: %d\n", a12 + b12);
            printf("c21: %d\n", a21 + b21);
            printf("c22: %d\n", a22 + b22);
            break;
        
        case 2:
            printf("c11: %d\n", a11 - b11);
            printf("c12: %d\n", a12 - b12);
            printf("c21: %d\n", a21 - b21);
            printf("c22: %d\n", a22 - b22);
            break;
            
        case 3:
            printf("c11: %d\n", a11 * b11 + a12 * b21);
            printf("c12: %d\n", a11 * b12 + a12 * b22);
            printf("c21: %d\n", a21 * b11 + a22 * b21);
            printf("c22: %d\n", a21 * b12 + a22 * b22);
            break;
        default:
            return;
    }
}

int permutacao(int value) {
    int i;
    int total = 1;
    for (i = value; i > 0; i--) {
        total = total*i;
    }
    
    return total;
}

float combinacao(int n, int p) {
    int num = permutacao(n);
    int den1 = permutacao(p);
    int den2 = permutacao(n - p);
    int den = den1*den2;
    float comb = ((float) num)/((float) den);
    return comb;
}

void do_combinacao() {
    int n, p;
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    printf("Entre com o valor de p: ");
    scanf("%d", &p);
    
    if (p >= n) {
        printf("Erro: n deve ser maior do que p");
        return;
    }
    
    printf("RESULTADO: %f\n", combinacao(n, p));
}

int main()
{
    int menu, proposicional;
    char opcao;


    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%%%%%  CALCULA FATEC  ADS %%%%%%%%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");

    do         // STAY ON MENU // PERMANEÇA NO MENU
    {


        printf("    MENU \n\n");

        printf("1 - SOMATORIO \n");
        printf("2 - LOGICA PROPOSICIONAL \n");
        printf("3 - MATRIZES \n");
        printf("4 - ANALISE COMBINATORIA \n");
        printf("5 - SAIR \n\n");

        printf(" * DIGITE A OPCAO QUE DESEJA: ");
        scanf("%d", &menu);

        printf("\n");

        switch(menu)
        {

            int somatoria, somatoriamenu;
        case 1:

            printf("1 - Somatorio de j = m ate n para a regra j\n\n");
            printf("2 - Somatorio de j = m ate n para a regra (−j)^(j + 1)\n\n");
            printf("3 - Voltar ao Menu anterior\n\n");

            printf(" * DIGITE A OPCAO DESEJADA: ");
            scanf("%d,", &somatoriamenu);
            printf("\n");

            switch(somatoriamenu)
            {
                int m, n, j, soma;
            case 1:
                printf(" - DIGITE UM VALOR PARA M: ");
                scanf("%d", &m);
                printf(" - DIGITE UM VALOR PARA N: ");
                scanf("%d", &n);

                for(j=1, soma=0; j <= n; j++)   // Somatorio de j = m ateh n para a regra
                {
                    soma = soma + j;
                }

                printf("\n");
                printf("   RESULTADO = %d \n\n", soma);
                printf("   RETORNANDO AO MENU PRINCIAL........ \n\n");

                break;

            case 2:
                printf(" - DIGITE UM VALOR PARA M: ");
                scanf("%d", &m);
                printf(" - DIGITE UM VALOR PARA N: ");
                scanf("%d", &n);
                int aux;

                for(j=1, soma=0; j <= n; j++)   // Somatorio de j = m ateh n para a regra (−j)^(j + 1)
                {
                    soma = pow(j, j+1);         // Falta Finalizar....
                    aux = soma + 1;
                }

                printf("\n");
                printf("   RESULTADO = %d \n\n", soma);
                printf("   RETORNANDO AO MENU PRINCIAL........ \n\n");

                break;

            case 3:
                printf(" ");


            }

            break;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// LOGICA PROPOSICIONAL//// PROPOSITIONAL LOGIC ////

        case 2:

            printf("1. ~p \n\n");
            printf("2. ~q \n\n");
            printf("3. p ∧ q \n\n");
            printf("4. p ∨ q \n\n");
            printf("5. p V_ q \n\n");
            printf("6. p -> q \n\n");
            printf("7. p <-> q \n\n");
            printf("8. VOLTAR AO MENU ANTERIOR\n\n");

            printf(" * DIGITE A OPCAO DESEJADA: ");
            scanf("%d", &proposicional);

            switch(proposicional)
            {
                int p, q;
            case 1:
                printf("| p | ~p |\n");
                printf("| V |  F |\n");
                printf("| F |  V |\n");
                printf("\n");
                break;

            case 2:
                printf("| q | ~q |\n");
                printf("| V |  F |\n");
                printf("| F |  V |\n");
                printf("\n");
                break;

            case 3:
                printf("| p | q | p∧q |\n");
                printf("| V | V |  V   |\n");
                printf("| V | F |  F   |\n");
                printf("| F | V |  F   |\n");
                printf("| F | F |  F   |\n");
                printf("\n");
                break;

            case 4:
                printf("| p | q | p∨q |\n");
                printf("| V | V |  V   |\n");
                printf("| V | F |  V   |\n");
                printf("| F | V |  V   |\n");
                printf("| F | F |  F   |\n");
                printf("\n");
                break;

            case 5:
                printf("| p | q | pV_q  |\n");
                printf("| V | V |  F   |\n");
                printf("| V | F |  V   |\n");
                printf("| F | V |  V   |\n");
                printf("| F | F |  F   |\n");
                printf("\n");
                break;

            case 6:
                printf("| p | q | p->q |\n");
                printf("| V | V |  V  |\n");
                printf("| V | F |  F  |\n");
                printf("| F | V |  V  |\n");
                printf("| F | F |  V  |\n");
                printf("\n");
                break;

            case 7:
                printf("| p | q | p<->q |\n");
                printf("| V | V |  V  |\n");
                printf("| V | F |  F  |\n");
                printf("| F | V |  F  |\n");
                printf("| F | F |  V  |\n");
                printf("\n");
                break;

            case 8:
                printf(" ");

            }


            break;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 3:                                                   // MATRIZES

            matrizes();
            break;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 4:                                                   // ANÁLISE COMBINATÓRIA
            do_combinacao();
            break;


        case 5:
            printf("DESCONECTANDO...AGUARDE.... \nPROGRAMA FINALIZADO COM SUCESSO! .... PRESSIONE A TECLA ENTER PARA SAIR!\n");                   // SAIR
            exit(1); // SAINDO SOMENTE NA OPÇÃO 5


        default:
            printf("* DIGITE UMA OPCAO QUE SEJA VALIDA *\n\n");                  // OPÇÃO INVALIDA

        }
    }
    while(1);   // ....PERMANECER NO MENU....


    printf("\n\n\n\n\n\n\n\n\n\n\n");
    return 0;
}
