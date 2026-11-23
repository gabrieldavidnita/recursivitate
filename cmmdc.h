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


bool suntPrimeIntreEle(int a,int b)
{
    if(a==0)return b==1;
    if(b==0)return a==1;
    if(a==b)return a==1;
    if(a>b)return suntPrimeIntreEle(a-b,b);
    return suntPrimeIntreEle(a,b-a);
}

void solutieSuntPrimeIntreEle()
{
    cout<<suntPrimeIntreEle(8,15)<<endl;
    cout<<suntPrimeIntreEle(12,18)<<endl;
    cout<<suntPrimeIntreEle(1,1)<<endl;
    cout<<suntPrimeIntreEle(1,9)<<endl;
    cout<<suntPrimeIntreEle(10,25)<<endl;
}

// cati pasi are euclid??
#endif // CMMDC_H_INCLUDED
