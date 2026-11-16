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

#endif // PALINDROM-VECTOR_H_INCLUDED
