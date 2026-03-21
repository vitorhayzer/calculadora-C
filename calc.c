#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
    float num1 = 0, num2 = 0, num3 = 0, res = 0;
    int i = 0;
    printf("-----MATEMATICA-----\n\n1-soma\n2-sub\n3-mult\n4-div\n5-sen, cos e tan\n6-bhaskara\n \n-----FISICA-----\n\n 7-força\n");
    scanf("%d", & i);

    if (i == 5) {
        printf("digite o numero para calcular o seno\n");
        scanf("%f", & num1);

    } else if (i == 6) {
        printf("digite a, b e c(nessa ordem)\n");
        scanf("%f %f %f", & num1, & num2, & num3);

    } else if (i == 7) {
        printf("digite a massa e a aceleraçao pra obter a força\n");
        scanf("%f %f", & num1, & num2);

    } else {
        printf("digite os numeros da operacao\n");
        scanf("%f %f", & num1, & num2);
    }

    switch (i) {
        case 1:
            res = num1 + num2;
            printf("resultado: %.3f", res);
            break;

        case 2:
            res = num1 - num2;
            printf("resultado: %.3f", res);
            break;

        case 3:
            res = num1 * num2;
            printf("resultado: %.3f", res);
            break;

        case 4:
            if (num2 == 0) {
                printf("divisao por 0 detectada");
                return 666;
            }
            res = num1 / num2;
            printf("resultado: %.3f", res);
            break;

        case 5: {
            float s, c, t;
            s = sin(num1);
            c = cos(num1);
            t = tan(num1);

            printf("seno: %.3f\ncosseno: %.3f\ntangente: %.3f", s, c, t);
            break;
        }
        

        case 6: {
            float dt = num2 * num2 - 4 * num1 * num3;
            float r1, r2;
            if (dt < 0) {
                printf("raizes complexas");
                return 666;
            }
            r1 = (-num2 + sqrt(dt)) / (2 * num1);
            r2 = (-num2 -
                sqrt(dt)) / (2 * num1);
            printf("conjunto {%.3f, %.3f}", r1, r2);
            break;
        }
        

        case 7:{
            float f = num1 * num2;
            printf("\nforça: %.3f", f);
            break;
        }
        

         default:
            printf("opção invalida");
            return 666;
             break;

            
    }

    return 0;
}