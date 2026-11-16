#ifndef FIBONACCI_H_INCLUDED
#define FIBONACCI_H_INCLUDED


int apeluriFib(int n)
{
    if (n<=1)
        return 1;

    return 1+apeluriFib(n-1)+apeluriFib(n-2);
}

int combinari(int n, int k)
{
    if (k<0 || k>n)
        return 0;

    if (k==0 || k==n)
        return 1;

    return combinari(n-1,k-1)+combinari(n-1, k);
}

void solutieCombinari()
{
    cout<<"C(5,2)->"<<combinari(5,2)<<endl;
    cout<<"C(6,0)->"<<combinari(6,0)<<endl;
    cout<<"C(4,4)->"<<combinari(4,4)<<endl;
    cout<<"C(10,3)->"<<combinari(10,3)<<endl;
    cout<<"C(20,10)->"<<combinari(20,10)<<endl;
}
#endif // FIBONACCI_H_INCLUDED
