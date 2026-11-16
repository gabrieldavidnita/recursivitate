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



#endif // VOID-REFERINTA_H_INCLUDED
