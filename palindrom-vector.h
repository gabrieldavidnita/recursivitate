#ifndef PALINDROM-VECTOR_H_INCLUDED
#define PALINDROM-VECTOR_H_INCLUDED


void oglindesteRecursiv(int v[],int st,int dr)
{
    if(st>=dr)
        return;

    int aux=v[st];
    v[st]=v[dr];
    v[dr]=aux;

    oglindesteRecursiv(v,st+1,dr-1);
}

void oglindeste(int v[],int n)
{
    oglindesteRecursiv(v,0,n-1);
}

//2?
bool sumeEgaleRecursiv(int v[],int st,int dr,int suma)
{
    if(st>=dr)
    return true;
    if(v[st]+v[dr]!=suma)
        return false;
    return sumeEgaleRecursiv(v,st+1,dr-1,suma);
}

bool sumeEgale(int v[],int n)
{
    if(n<=1)
        return true;
    return sumeEgaleRecursiv(v,0,n-1,v[0]+v[n-1]);
}

void solutieSumeEgale()
{
    int v1[]={1,4,3,6};
    int v2[]={1,2,3,4,5};
    int v3[]={1,2,3,5};
    int v4[]={3,3};
    int v5[]={5};
    cout<<sumeEgale(v1,4)<<endl;
    cout<<sumeEgale(v2,5)<<endl;
    cout<<sumeEgale(v3,4)<<endl;
    cout<<sumeEgale(v4,2)<<endl;
    cout<<sumeEgale(v5,1)<<endl;
}
#endif // PALINDROM-VECTOR_H_INCLUDED
