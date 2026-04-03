#include <stdio.h>

const float DESCUENTO_POR_VOLUMEN = 0.10;
const float LIMITE_LITROS_DESCUENTO = 5000.0;

int main() {

    // Variables para guardar los datos ingresados y los calculos
    float litros_producidos;
    float costo_por_litro;
    float subtotal;
    float monto_descuento = 0.0;
    float costo_total;

    printf("--- Calculadora de Costos de Produccion: Bodega Riojana ---\n\n");

    printf("Ingrese la cantidad de litros producidos en la temporada: ");
    scanf("%f", &litros_producidos);

    printf("Ingrese el costo de produccion por litro (en pesos): ");
    scanf("%f", &costo_por_litro);

    // Calculo el costo base sin descuentos
    subtotal = litros_producidos * costo_por_litro;

    // Verifico si corresponde aplicar la rebaja por cantidad
    if (litros_producidos > LIMITE_LITROS_DESCUENTO) {
        monto_descuento = subtotal * DESCUENTO_POR_VOLUMEN;
        printf("\n[*] Nota: Se ha aplicado un descuento del 10%% por venta mayorista (mas de %.0f L).\n", LIMITE_LITROS_DESCUENTO);
    }

    // Calculo cuanto queda en total
    costo_total = subtotal - monto_descuento;

    // Imprimo el ticket final en pantalla
    printf("\n--- Resumen de Costos ---\n");
    printf("Litros producidos: %.2f L\n", litros_producidos);
    printf("Costo unitario: $%.2f\n", costo_por_litro);
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Descuento aplicado: $%.2f\n", monto_descuento);
    printf("Costo Total Final: $%.2f\n", costo_total);

    return 0;
}
