#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b)
{
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b)
{
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
// Funcion multiplicar recibe dos enteros y retorna la multiplicacion de los mismos.
int multiplicar(int a, int b)
{
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n)
{
    return (n % 2) == 0;
}
