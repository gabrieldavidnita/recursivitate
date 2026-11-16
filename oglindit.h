#ifndef OGLINDIT_H_INCLUDED
#define OGLINDIT_H_INCLUDED
int oglindesteRecursiv(int n, int r)
{
    if (n==0)
        return r;

    return oglindesteRecursiv(n/10, r*10+n%10);
}

int sumaCuOglinditul(int n)
{
    return n+oglindesteRecursiv(n, 0);
}

void solutieSumaCuOglinditul()
{
    cout<<123<<"->"<<sumaCuOglinditul(123)<<endl;
    cout<<120<<"->"<<sumaCuOglinditul(120)<<endl;
    cout<<7<<"->"<<sumaCuOglinditul(7)<<endl;
    cout<<0<<"->"<<sumaCuOglinditul(0)<<endl;
}
#endif // OGLINDIT_H_INCLUDED
