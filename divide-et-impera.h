#ifndef DIVIDE-ET-IMPERA_H_INCLUDED
#define DIVIDE-ET-IMPERA_H_INCLUDED

void minMaxInterval(int v[],int st,int dr,int& minim,int& maxim)
{
    if(st==dr)
    {
        minim=v[st];
        maxim=v[st];
        return;
    }

    int mij=(st+dr)/2;

    int min1,max1,min2,max2;

    minMaxInterval(v,st,mij,min1,max1);
    minMaxInterval(v,mij+1,dr,min2,max2);

    if(min1<min2)
        minim=min1;
    else
        minim=min2;

    if(max1>max2)
        maxim=max1;
    else
        maxim=max2;
}

int amplitudine(int v[],int st,int dr)
{
    int minim,maxim;

    minMaxInterval(v,st,dr,minim,maxim);

    return maxim-minim;
}

int maximInterval(int v[],int st,int dr)
{
    if(st==dr)
        return v[st];

    int mij=(st+dr)/2;

    int max1=maximInterval(v,st,mij);
    int max2=maximInterval(v,mij+1,dr);

    if(max1>max2)
        return max1;

    return max2;
}

int numaraValoarea(int v[],int st,int dr,int x)
{
    if(st>dr)
        return 0;

    int mij=(st+dr)/2;

    return (v[mij]==x)+numaraValoarea(v,st,mij-1,x)+numaraValoarea(v,mij+1,dr,x);
}

int aparitiiMaxim(int v[],int st,int dr)
{
    int maxim=maximInterval(v,st,dr);

    return numaraValoarea(v,st,dr,maxim);
}

void solutieAmplitudine()
{
    int v1[]={7,2,9,4,5};
    int v2[]={1,9};
    int v3[]={4,4,4};
    int v4[]={6};

    cout<<"7 2 9 4 5->"<<amplitudine(v1,0,4)<<endl;
    cout<<"1 9->"<<amplitudine(v2,0,1)<<endl;
    cout<<"4 4 4->"<<amplitudine(v3,0,2)<<endl;
    cout<<"6->"<<amplitudine(v4,0,0)<<endl;
}

void solutieAparitiiMaxim()
{
    int v1[]={3,9,2,9,1};
    int v2[]={4,4,4};
    int v3[]={1,2,3};
    int v4[]={5};

    cout<<"3 9 2 9 1->"<<aparitiiMaxim(v1,0,4)<<endl;
    cout<<"4 4 4->"<<aparitiiMaxim(v2,0,2)<<endl;
    cout<<"1 2 3->"<<aparitiiMaxim(v3,0,2)<<endl;
    cout<<"5->"<<aparitiiMaxim(v4,0,0)<<endl;
}

#endif // DIVIDE-ET-IMPERA_H_INCLUDED
