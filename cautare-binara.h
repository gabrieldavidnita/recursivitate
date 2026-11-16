#ifndef CAUTARE-BINARA_H_INCLUDED
#define CAUTARE-BINARA_H_INCLUDED

int cautaRecursiv(int v[],int st,int dr,int x)
{
    if(st>dr)
        return -1;

    int mij=(st+dr)/2;

    if(v[mij]==x)
        return mij;

    if(v[mij]<x)
        return cautaRecursiv(v,mij+1,dr,x);

    return cautaRecursiv(v,st,mij-1,x);
}

bool apare(int v[],int n,int x)
{
    return cautaRecursiv(v,0,n-1,x)!=-1;
}
void solutieApare()
{
    int v[]={2,5,9,14,20};
    int w[]={7};

    cout<<"x=9->"<<apare(v,5,9)<<endl;
    cout<<"x=10->"<<apare(v,5,10)<<endl;
    cout<<"x=7->"<<apare(w,1,7)<<endl;
    cout<<"x=3->"<<apare(w,1,3)<<endl;
}

//2?

#endif // CAUTARE-BINARA_H_INCLUDED
