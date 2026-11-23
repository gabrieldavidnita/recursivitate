#ifndef FACTORIAL-PUTERE_H_INCLUDED
#define FACTORIAL-PUTERE_H_INCLUDED

int sumaPanaLa(int n)
{
    if(n==0)
    {
         return 0;
    }
    return n+sumaPanaLa(n-1);
}

void solutieSumaPanaLa()
{
    cout<<5<<"->"<<sumaPanaLa(5)<<endl;
     cout<<1<<"->"<<sumaPanaLa(1)<<endl;
      cout<<0<<"->"<<sumaPanaLa(0)<<endl;
       cout<<100<<"->"<<sumaPanaLa(100)<<endl;

}


int produsImpare(int n)
{
    if (n<=0)
        return 1;

    if (n%2==0)
        return produsImpare(n-1);

    return n*produsImpare(n-2);
}
void solutieProdusImpare()
{
    cout<<7<<"->"<<produsImpare(7)<<endl;
    cout<<8<<"->"<<produsImpare(8)<<endl;
    cout<<1<<"->"<<produsImpare(1)<<endl;
    cout<<0<<"->"<<produsImpare(0)<<endl;
}

int putereMod(int baza,int exp,int m)
{
    if(exp==0)
        return 1%m;
    return (baza%m*putereMod(baza,exp-1,m))%m;
}

int putereRapida(int baza,int exp)
{
    if(exp==0)return 1;
    int p=putereRapida(baza,exp/2);
    if(exp%2==0)
        return p*p;
    return baza*p*p;
}

void solutiePutereRapida()
{
    cout<<putereRapida(2,10)<<endl;
    cout<<putereRapida(3,0)<<endl;
    cout<<putereRapida(5,1)<<endl;
    cout<<putereRapida(7,5)<<endl;
    cout<<putereRapida(2,30)<<endl;
}
void solutiePutereMod()
{
    cout<<putereMod(2,10,1000)<<endl;
    cout<<putereMod(7,0,5)<<endl;
    cout<<putereMod(5,3,13)<<endl;
    cout<<putereMod(0,0,7)<<endl;
    cout<<putereMod(3,4,1)<<endl;
}
#endif // FACTORIAL-PUTERE_H_INCLUDED
