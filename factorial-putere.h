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
#endif // FACTORIAL-PUTERE_H_INCLUDED
