#ifndef CIFRE-RECURSIVE_H_INCLUDED
#define CIFRE-RECURSIVE_H_INCLUDED
//4738

//
// cifraMaxima(4)     n<10 true return 4
// cifraMaxima(47)   n<10  false uc=7  maxim=ciframaxima(4)[] => maxim=4  7>4 da return 7
// cifraMaxima(473)  n<!0 false uc=3  maxim=ciframaxima(47)[] => maxim=7  7>3 nu return 7
// cifraMaxima(4738) n<10 false uc=8  maxim=cifraMaxima(473)[]=> maxim=7  7>8 nu return 8
int cifraMaxima(int n)
{
       if(n<10){
         return n;
       }
       int uc=n%10;
       int maxim=cifraMaxima(n/10);

       if(uc>maxim)
       {
           return uc;
       }

       return maxim;

}

void solutieCifraMaxima()
{
    int n;
    cout<<4738<<"->"<<cifraMaxima(4738)<<endl;
    cout<<7<<"->"<<cifraMaxima(7)<<endl;
    cout<<0<<"->"<<cifraMaxima(0)<<endl;
    cout<<1000<<"->"<<cifraMaxima(1000)<<endl;
}

int cifrePare(int n )
{
    if(n==0)
        return 0;

    if(n%10%2==0)
        return 1+cifrePare(n/10);

    return cifrePare(n/10);
}

void solutieCifrePare()
{
    cout<<4738<<"->"<<cifrePare(4738)<<endl;
    cout<<1357<<"->"<<cifrePare(1357)<<endl;
    cout<<2000<<"->"<<cifrePare(2000)<<endl;
    cout<<7<<"->"<<cifrePare(7)<<endl;
}
#endif // CIFRE-RECURSIVE_H_INCLUDED
