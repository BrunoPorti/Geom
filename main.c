//Autor:  Bruno Portilla
// OBJETIVO ES QUE EL USUARIO PUEDA CALCULAR EL AREA, VOLUMEN O PERIMETRO CON ESTE PROGRAMA.
#include <stdio.h>
//EN CADA FUNCION CALCULO CADA AREA ,PERIMETRO O VOLUMEN DE CADA FIGURA
int CalcPeriTri (double a, double b, double c) {
    double result;
    result = (a + b + c);
    return result;
}


int CalcPeriSqu(double a) {
    double result;
    result = (a * 4);
    return result;
}

int CalcPeriRec(double b, double h) {
    double result;
    result = (b + b + h + h);
    return result;
}

int CalcSurfTri(double b, double h){
    double result;
    result = ((b * h)/ 2);
    return result;
}

int CalcSurfSqu(double a){
    double result;
    result = (a*a);
    return result;
}

int CalcSurfRec(double b, double h){
    double result;
    result = (b * h);
    return result;
}

int CalcVolTri(double b, double h, double hp) {
    double result;
    result = ((((b * h)/ 2) * hp)/3);
    return result;
}

int CalcVolCub(double a) {
    double result;
    result = (a*a*a);
    return result;
}
int CalcVolRec(double b, double h, double hp) {
    double result;
    result = ((b * h)* hp);
    return result;
}
//EN MAIN LE PIDO LOS DATOS AL USUARIO DESDE QUE QUIERE QUE CALCULE, QUE FIGURA ES HASTA LOS VALORES DE LOS LADOS.
int main() {
    int  option;
    int shape;
    float result;
    float sizea;
    float sizeb;
    float sizec;
    do{
        printf("what would you like to calculate?\n 1. Perimeter.\n 2. Surface.\n 3. Volume.\n 4. Exit.\n");
        scanf("%i", &option);


        if (option == 1) {      //PERIMETRO
            printf("what shape is it?\n 1. Triangle\n 2. Square\n 3.Rectangle\n");
            scanf("%i", &shape);

            if (shape == 1){

                printf("give the size of the sides:\n");
                scanf("%f %f %f", &sizea, &sizeb, &sizec);
                result = CalcPeriTri(sizea, sizeb, sizec);
            }

            else if (shape == 2){
                printf("give the size of one side:\n");
                scanf("%f", &sizea);
                result = CalcPeriSqu(sizea);
            }

            else if (shape == 3){
                printf("give the size of base and height:\n");
                scanf("%f %f", &sizea, &sizeb);
                result = CalcPeriRec(sizea, sizeb);
            }

            printf("the Perimeter is: %f", result);
        }
        else if (option == 2) {     //AREA
            printf("what shape is it?\n 1. Triangle\n 2. Square\n 3.Rectangle\n");
            scanf("%i", &shape);

            if (shape == 1){
                printf("give the size of base and height:\n");
                scanf("%f %f", &sizea, &sizeb);
                result = CalcSurfTri(sizea, sizeb);
            }

            else if (shape == 2){
                printf("give the size of one side:\n");
                scanf("%f", &sizea);
                result = CalcSurfSqu(sizea);
            }

            else if (shape == 3){
                printf("give the size of base and height:\n");
                scanf("%f %f", &sizea, &sizeb);
                result = CalcSurfRec(sizea, sizeb);
            }

            printf("the Surface is: %d", result);
        }
        else if (option == 3) {     //VOLUME
            printf("what shape is it?\n 1. triangular Prism\n 2. Cube\n 3.Rectanglar Prism\n");
            scanf("%i", &shape);

            if (shape == 1){
                printf("give the base and height of the base of the prism and the height of the prism:\n");
                scanf("%f %f %f", &sizea, &sizeb, &sizec);
                result = CalcVolTri(sizea, sizeb, sizec);
            }

            else if (shape == 2){
                printf("give the size of one side:\n");
                scanf("%f", &sizea);
                result = CalcVolCub(sizea);
            }

            else if (shape == 3){
                printf("give the base and height of the base of the prism and the height of the prism::\n");
                scanf("%f %f %f", &sizea, &sizeb, &sizec);
                result = CalcVolRec(sizea, sizeb, sizec);
            }

            printf("the Volume is: %f", result);
        }

    }while (option!=4);

    printf("goodbye!");

    return 0;
}
