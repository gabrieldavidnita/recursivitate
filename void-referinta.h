#ifndef VOID-REFERINTA_H_INCLUDED
#define VOID-REFERINTA_H_INCLUDED


void numaraPareImpare(int n,int&pare,int&impare)
{
    if(n==0)
        return;

    if((n%10)%2==0)
        pare++;
    else
        impare++;

    numaraPareImpare(n/10,pare,impare);
}

void minimSiMaxim(int n,int& minim,int& maxim)
{
    if(n==0)
        return;

    int cifra=n%10;

    if(cifra<minim)
        minim=cifra;

    if(cifra>maxim)
        maxim=cifra;

    minimSiMaxim(n/10,minim,maxim);
}

int inlocuiesteCifraRecursiv(int n,int c1,int c2,int r)
{
    if(n==0)
        return r;
    int cifra=n%10;
    if(cifra==c1)
        cifra=c2;
    return inlocuiesteCifraRecursiv(n/10,c1,c2,r*10+cifra);
}

void inlocuiesteCifra(int& n,int c1,int c2)
{
    n=inlocuiesteCifraRecursiv(n,c1,c2,0);
}

void solutieInlocuiesteCifra()
{
    int n=72717;
    inlocuiesteCifra(n,7,3);
    cout<<n<<endl;
    n=1200;
    inlocuiesteCifra(n,0,5);
    cout<<n<<endl;
    n=1234;
    inlocuiesteCifra(n,9,5);
    cout<<n<<endl;
    n=5050;
    inlocuiesteCifra(n,5,0);
    cout<<n<<endl;
    n=7;
    inlocuiesteCifra(n,7,0);
    cout<<n<<endl;
}

//4?
#endif // VOID-REFERINTA_H_INCLUDED
