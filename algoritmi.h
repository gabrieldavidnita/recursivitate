#ifndef ALGORITMI_H_INCLUDED
#define ALGORITMI_H_INCLUDED

#include <iostream>

using namespace std;

int factorial(int n)
{
    //  factorial(3) -> 3 * factorial(2) -> 3 * 2 * factorial(1) -> 3 * 2 * 1 * factorial(0) -> 3 * 2 * 1 * 1
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int putere(int baza, int exp)
{
    //  putere(2, 3) -> 2 * putere(2, 2) -> 2 * 2 * putere(2, 1) -> 2 * 2 * 2 * putere(2, 0) -> 2 * 2 * 2 * 1
    if (exp == 0)
    {
        return 1;
    }

    return baza * putere(baza, exp - 1);
}

int sumaCifre(int n)
{
    //  sumaCifre(472) -> 2 + sumaCifre(47) -> 2 + 7 + sumaCifre(4) -> 2 + 7 + 4 + sumaCifre(0) -> 13
    if (n == 0)
    {
        return 0;
    }

    return n % 10 + sumaCifre(n / 10);
}

int nrCifre(int n)
{
    if (n < 10)
    {
        return 1;
    }

    return 1 + nrCifre(n / 10);
}

int oglindit(int n, int r)
{
    //  oglindit(472, 0) -> oglindit(47, 2) -> oglindit(4, 27) -> oglindit(0, 274) -> 274
    if (n == 0)
    {
        return r;
    }

    return oglindit(n / 10, r * 10 + n % 10);
}

int oglindit(int n)
{
    return oglindit(n, 0);
}

bool estePalindrom(int n)
{
    return n == oglindit(n);
}

int cmmdc(int a, int b)
{
    //  cmmdc(48, 18) -> cmmdc(18, 12) -> cmmdc(12, 6) -> cmmdc(6, 0) -> 6
    if (b == 0)
    {
        return a;
    }

    return cmmdc(b, a % b);
}

int fib(int n)
{
    //  fib(4) -> fib(3) + fib(2) -> (fib(2) + fib(1)) + (fib(1) + fib(0)) : fib(2) se calculeaza de doua ori
    if (n < 2)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int fibRapid(int n, int a, int b)
{
    //  fibRapid(5, 0, 1) -> (4, 1, 1) -> (3, 1, 2) -> (2, 2, 3) -> (1, 3, 5) -> (0, 5, 8) -> 5
    if (n == 0)
    {
        return a;
    }

    return fibRapid(n - 1, b, a + b);
}

void numaratoareInversa(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        numaratoareInversa(n - 1);
    }
}

void numaratoareDirecta(int n)
{
    //  numaratoareDirecta(3) -> numaratoareDirecta(2) -> numaratoareDirecta(1) -> numaratoareDirecta(0) | 1 | 2 | 3
    if (n > 0)
    {
        numaratoareDirecta(n - 1);
        cout << n << " ";
    }
}

void cifreInOrdine(int n)
{
    //  cifreInOrdine(472) -> cifreInOrdine(47) -> cifreInOrdine(4) -> cifreInOrdine(0) | 4 | 7 | 2
    if (n > 0)
    {
        cifreInOrdine(n / 10);
        cout << n % 10 << " ";
    }
}

void cifreInvers(int n)
{
    if (n > 0)
    {
        cout << n % 10 << " ";
        cifreInvers(n / 10);
    }
}

void afisareVector(int v[], int n)
{
    if (n > 0)
    {
        afisareVector(v, n - 1);
        cout << v[n - 1] << " ";
    }
}

int sumaVector(int v[], int n)
{
    //  v = { 4, 7, 2 } : sumaVector(v, 3) -> sumaVector(v, 2) + 2 -> sumaVector(v, 1) + 7 + 2 -> 0 + 4 + 7 + 2
    if (n == 0)
    {
        return 0;
    }

    return sumaVector(v, n - 1) + v[n - 1];
}

int maximVector(int v[], int n)
{
    if (n == 1)
    {
        return v[0];
    }

    int maxim = maximVector(v, n - 1);
    if (v[n - 1] > maxim)
    {
        return v[n - 1];
    }

    return maxim;
}

int cautareBinara(int v[], int st, int dr, int x)
{
    //  v = { 2, 5, 9, 14, 20 } , x = 14 : (0, 4) mij = 2 -> (3, 4) mij = 3 -> gasit
    if (st > dr)
    {
        return -1;
    }

    int mij = st + (dr - st) / 2;
    if (v[mij] == x)
    {
        return mij;
    }
    if (v[mij] < x)
    {
        return cautareBinara(v, mij + 1, dr, x);
    }

    return cautareBinara(v, st, mij - 1, x);
}

bool estePalindromVector(int v[], int st, int dr)
{
    //  { 1, 2, 3, 2, 1 } : (0, 4) 1 = 1 -> (1, 3) 2 = 2 -> (2, 2) st = dr -> true
    if (st >= dr)
    {
        return true;
    }
    if (v[st] != v[dr])
    {
        return false;
    }

    return estePalindromVector(v, st + 1, dr - 1);
}

int maximInjumatatire(int v[], int st, int dr)
{
    //  { 3, 8, 1, 6 } : (0, 3) -> max(0, 1) = 8 si max(2, 3) = 6 -> 8
    if (st == dr)
    {
        return v[st];
    }

    int mij = (st + dr) / 2;
    int stanga = maximInjumatatire(v, st, mij);
    int dreapta = maximInjumatatire(v, mij + 1, dr);
    if (stanga > dreapta)
    {
        return stanga;
    }

    return dreapta;
}

void interclaseaza(int v[], int aux[], int i, int j, int mij, int dr, int k)
{
    if (i > mij && j > dr)
    {
        return;
    }

    if (j > dr || (i <= mij && v[i] <= v[j]))
    {
        aux[k] = v[i];
        interclaseaza(v, aux, i + 1, j, mij, dr, k + 1);
    }
    else
    {
        aux[k] = v[j];
        interclaseaza(v, aux, i, j + 1, mij, dr, k + 1);
    }
}

void copiaza(int v[], int aux[], int st, int dr)
{
    if (st <= dr)
    {
        v[st] = aux[st];
        copiaza(v, aux, st + 1, dr);
    }
}

void mergeSort(int v[], int st, int dr)
{
    //  { 5, 2, 8, 1 } -> { 5, 2 } si { 8, 1 } -> { 5 } { 2 } { 8 } { 1 } -> { 2, 5 } si { 1, 8 } -> { 1, 2, 5, 8 }
    if (st >= dr)
    {
        return;
    }

    int mij = (st + dr) / 2;
    mergeSort(v, st, mij);
    mergeSort(v, mij + 1, dr);

    int aux[100];
    interclaseaza(v, aux, st, mij + 1, mij, dr, st);
    copiaza(v, aux, st, dr);
}

void hanoi(int n, char a, char b, char c)
{
    //  hanoi(2, 'A', 'B', 'C') -> hanoi(1, 'A', 'C', 'B') | disc 2 : A -> C | hanoi(1, 'B', 'A', 'C')
    if (n > 0)
    {
        hanoi(n - 1, a, c, b);
        cout << "disc " << n << " : " << a << " -> " << c << endl;
        hanoi(n - 1, b, a, c);
    }
}

void sumaSiProdus(int n, int& suma, int& produs)
{
    //  main porneste suma = 0 si produs = 1 ; fiecare apel le modifica pe cele ale lui main, nu o copie
    if (n > 0)
    {
        suma = suma + n % 10;
        produs = produs * (n % 10);
        sumaSiProdus(n / 10, suma, produs);
    }
}

void maximulCifrelor(int n, int& maxim)
{
    if (n > 0)
    {
        if (n % 10 > maxim)
        {
            maxim = n % 10;
        }
        maximulCifrelor(n / 10, maxim);
    }
}

void exemple()
{
    cout << "--- factorial / putere ---" << endl;
    cout << "factorial(5) = " << factorial(5) << endl;
    cout << "factorial(1) = " << factorial(1) << endl;
    cout << "factorial(0) = " << factorial(0) << endl;
    cout << "putere(2, 10) = " << putere(2, 10) << endl;
    cout << "putere(7, 1) = " << putere(7, 1) << endl;
    cout << "putere(7, 0) = " << putere(7, 0) << endl;

    cout << endl << "--- sumaCifre / nrCifre ---" << endl;
    cout << "4738 : suma " << sumaCifre(4738) << " , " << nrCifre(4738) << " cifre" << endl;
    cout << "7 : suma " << sumaCifre(7) << " , " << nrCifre(7) << " cifre" << endl;
    cout << "0 : suma " << sumaCifre(0) << " , " << nrCifre(0) << " cifre" << endl;
    cout << "10203 : suma " << sumaCifre(10203) << " , " << nrCifre(10203) << " cifre" << endl;

    cout << endl << "--- oglindit / estePalindrom ---" << endl;
    cout << "4738 : oglindit " << oglindit(4738) << endl;
    cout << "1200 : oglindit " << oglindit(1200) << endl;
    cout << "0 : oglindit " << oglindit(0) << endl;
    if (estePalindrom(1221))
    {
        cout << "1221 este palindrom" << endl;
    }
    if (estePalindrom(120) == false)
    {
        cout << "120 nu este palindrom" << endl;
    }

    cout << endl << "--- cmmdc ---" << endl;
    cout << "cmmdc(48, 18) = " << cmmdc(48, 18) << endl;
    cout << "cmmdc(7, 13) = " << cmmdc(7, 13) << endl;
    cout << "cmmdc(9, 9) = " << cmmdc(9, 9) << endl;
    cout << "cmmdc(5, 0) = " << cmmdc(5, 0) << endl;

    cout << endl << "--- fib / fibRapid ---" << endl;
    cout << "fib(0) = " << fib(0) << " , fib(1) = " << fib(1) << " , fib(12) = " << fib(12) << endl;
    cout << "fibRapid(0) = " << fibRapid(0, 0, 1) << " , fibRapid(1) = " << fibRapid(1, 0, 1) << " , fibRapid(12) = " << fibRapid(12, 0, 1) << endl;
    cout << "fibRapid(40) = " << fibRapid(40, 0, 1) << endl;

    cout << endl << "--- afisare inainte / dupa apel ---" << endl;
    cout << "numaratoareInversa(5) : ";
    numaratoareInversa(5);
    cout << endl << "numaratoareDirecta(5) : ";
    numaratoareDirecta(5);
    cout << endl << "cifreInOrdine(4738) : ";
    cifreInOrdine(4738);
    cout << endl << "cifreInvers(4738) : ";
    cifreInvers(4738);
    cout << endl << "numaratoareInversa(0) : ";
    numaratoareInversa(0);
    cout << "(nimic)" << endl;

    int v[] = { 4, 7, 2, 9, 6 };
    int unul[] = { 8 };

    cout << endl << "--- sumaVector / maximVector ---" << endl;
    afisareVector(v, 5);
    cout << ": suma " << sumaVector(v, 5) << " , maxim " << maximVector(v, 5) << endl;
    afisareVector(unul, 1);
    cout << ": suma " << sumaVector(unul, 1) << " , maxim " << maximVector(unul, 1) << endl;

    int o[] = { 2, 5, 9, 14, 20 };
    cout << endl << "--- cautareBinara ---" << endl;
    cout << "14 : pozitia " << cautareBinara(o, 0, 4, 14) << endl;
    cout << "2 : pozitia " << cautareBinara(o, 0, 4, 2) << endl;
    cout << "20 : pozitia " << cautareBinara(o, 0, 4, 20) << endl;
    cout << "7 : pozitia " << cautareBinara(o, 0, 4, 7) << endl;
    cout << "8 intr-un vector de un element : pozitia " << cautareBinara(unul, 0, 0, 8) << endl;

    int p1[] = { 1, 2, 3, 2, 1 };
    int p2[] = { 1, 2, 3, 4 };
    int p3[] = { 6, 6 };
    cout << endl << "--- estePalindromVector ---" << endl;
    cout << "1 2 3 2 1 : " << estePalindromVector(p1, 0, 4) << endl;
    cout << "1 2 3 4 : " << estePalindromVector(p2, 0, 3) << endl;
    cout << "6 6 : " << estePalindromVector(p3, 0, 1) << endl;
    cout << "8 : " << estePalindromVector(unul, 0, 0) << endl;

    int d[] = { 3, 8, 1, 6, 5 };
    int s[] = { 5, 2, 8, 1, 9, 3, 7 };
    cout << endl << "--- maximInjumatatire / mergeSort ---" << endl;
    cout << "maxim 3 8 1 6 5 : " << maximInjumatatire(d, 0, 4) << endl;
    cout << "maxim 8 : " << maximInjumatatire(unul, 0, 0) << endl;
    cout << "inainte : ";
    afisareVector(s, 7);
    mergeSort(s, 0, 6);
    cout << endl << "dupa : ";
    afisareVector(s, 7);
    cout << endl;
    mergeSort(unul, 0, 0);
    cout << "un element : ";
    afisareVector(unul, 1);
    cout << endl;

    cout << endl << "--- hanoi ---" << endl;
    cout << "n = 1 :" << endl;
    hanoi(1, 'A', 'B', 'C');
    cout << "n = 3 :" << endl;
    hanoi(3, 'A', 'B', 'C');

    cout << endl << "--- sumaSiProdus / maximulCifrelor ---" << endl;
    int suma = 0;
    int produs = 1;
    sumaSiProdus(4738, suma, produs);
    cout << "4738 : suma " << suma << " , produs " << produs << endl;
    int maxim = 0;
    maximulCifrelor(4738, maxim);
    cout << "4738 : maxim " << maxim << endl;
    suma = 0;
    produs = 1;
    sumaSiProdus(7, suma, produs);
    cout << "7 : suma " << suma << " , produs " << produs << endl;
}

#endif // ALGORITMI_H_INCLUDED
