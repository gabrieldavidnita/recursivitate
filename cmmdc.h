#ifndef CMMDC_H_INCLUDED
#define CMMDC_H_INCLUDED

int cmmdcRecursiv(int a, int b)
{
    if (b==0)
        return a;

    return cmmdcRecursiv(b, a%b);
}

int cmmmc(int a, int b)
{
    if (a==0 || b==0)
        return 0;

    return (a/cmmdcRecursiv(a,b))*b;
}

int numitorIreductibil(int a, int b)
{
    return b/cmmdcRecursiv(a,b);
}

void solutieCmmmc()
{
    cout<<"12,18->"<<cmmmc(12,18)<<endl;
    cout<<"7,13->"<<cmmmc(7,13)<<endl;
    cout<<"5,5->"<<cmmmc(5,5)<<endl;
    cout<<"1,9->"<<cmmmc(1,9)<<endl;
}

void solutieNumitorIreductibil()
{
    cout<<"12/18->"<<numitorIreductibil(12,18)<<endl;
    cout<<"7/7->"<<numitorIreductibil(7,7)<<endl;
    cout<<"4/9->"<<numitorIreductibil(4,9)<<endl;
    cout<<"0/5->"<<numitorIreductibil(0,5)<<endl;
}
#endif // CMMDC_H_INCLUDED
