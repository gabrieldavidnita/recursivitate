#ifndef AFISARE-APEL_H_INCLUDED
#define AFISARE-APEL_H_INCLUDED
void f(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        f(n-1);
        cout<<n<<" ";
    }
}

void g(int n)
{
    if(n>1)
    {
        g(n-2);
        cout<<n<<" ";
        g(n-2);
    }
}



void solutieF()
{
    cout<<"f(3)->";
    f(3);
    cout<<endl;

    cout<<"f(1)->";
    f(1);
    cout<<endl;

    cout<<"f(4)->";
    f(4);
    cout<<endl;

    cout<<"f(0)->";
    f(0);
    cout<<endl;
}

void solutieG()
{
    cout<<"g(5)->";
    g(5);
    cout<<endl;

    cout<<"g(6)->";
    g(6);
    cout<<endl;

    cout<<"g(2)->";
    g(2);
    cout<<endl;

    cout<<"g(1)->";
    g(1);
    cout<<endl;
}
//munte?
//dus - intors?
#endif // AFISARE-APEL_H_INCLUDED
