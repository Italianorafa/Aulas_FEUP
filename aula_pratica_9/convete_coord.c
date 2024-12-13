#include <stdio.h>
#include <math.h>

void cartesianas_polares(double x, double y, double *r, double *theta){
    double radx, rady;
    radx = (x * M_PI)/180;
    rady = (y * M_PI)/180;
    *r = sqrt((pow(x,2))+(pow(y,2)));
    *theta = atan2(rady, radx);
}

void polares_cartesianas(double r, double theta, double *x, double *y){
    double radtheta;
    radtheta = (theta * M_PI)/180;
    *x = r * cos(radtheta);
    *y = r * sin(radtheta);
}

int main(){
    double x, y, r, theta; int chose;

    printf("Coordenadas cartesianas para polares(1) ou coordenadas polares para cartesianas(2)?");
    scanf("%d", &chose);

    if (chose == 1){
        printf("Insira o x: ");
        scanf("%lf", &x);
        printf("Insira o y: ");
        scanf("%lf", &y);
        cartesianas_polares(x, y, &r, &theta);
        theta = theta * 180 / M_PI;
        printf("As coordenadas em notação 'Coordenadas polares' é (%.2lf, %.2lf°)\n", r, theta);
    }
    else{
        printf("Insira o r: ");
        scanf("%lf", &r);

        printf("Insira o theta: ");
        scanf("%lf", &theta);

        polares_cartesianas(r, theta, &x, &y);
        printf("As coordenadas em notação 'Coordenadas cartesianas' é (%.2lf, %.2lf)\n", x, y);
    }
}