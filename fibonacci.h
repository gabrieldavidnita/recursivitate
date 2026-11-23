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

int termenul(int n,int a,int b)
{
    if(n==0)
        return a;
    if(n==1)
        return b;
    return 2*termenul(n-1,a,b)+termenul(n-2,a,b);
}

void solutieTermenul()
{
    cout<<termenul(5,2,3)<<endl;
    cout<<termenul(0,4,7)<<endl;
    cout<<termenul(1,4,7)<<endl;
    cout<<termenul(6,1,1)<<endl;
    cout<<termenul(10,0,1)<<endl;
}

int tribonacci(int n)
{
    if(n==0||n==1)
        return 0;
    if(n==2)
    return 1;
    return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
}

void solutieTribonacci()
{
    cout<<tribonacci(10)<<endl;
    cout<<tribonacci(0)<<endl;
    cout<<tribonacci(1)<<endl;
    cout<<tribonacci(2)<<endl;
    cout<<tribonacci(20)<<endl;
}
#endif // FIBONACCI_H_INCLUDED
