#ifndef SUMA-MAXIM-VECTOR_H_INCLUDED
#define SUMA-MAXIM-VECTOR_H_INCLUDED



int cateElementePare(int v[],int n)
{
    if(n==0)
        return 0;

    if(v[n-1]%2==0)
        return 1+cateElementePare(v,n-1);

    return cateElementePare(v,n-1);
}

int produsElemente(int v[],int n)
{
    if(n==0)
        return 1;

    return v[n-1]*produsElemente(v,n-1);
}

void solutieCateElementePare()
{
    int v1[]={4,7,2,9,6};
    int v2[]={1,3,5};
    int v3[]={8};
    int v4[]={7};

    cout<<"4 7 2 9 6->"<<cateElementePare(v1,5)<<endl;
    cout<<"1 3 5->"<<cateElementePare(v2,3)<<endl;
    cout<<"8->"<<cateElementePare(v3,1)<<endl;
    cout<<"7->"<<cateElementePare(v4,1)<<endl;
}

void solutieProdusElemente()
{
    int v1[]={2,3,4};
    int v2[]={5};
    int v3[]={1,1,1};
    int v4[]={7,0,3};

    cout<<"2 3 4->"<<produsElemente(v1,3)<<endl;
    cout<<"5->"<<produsElemente(v2,1)<<endl;
    cout<<"1 1 1->"<<produsElemente(v3,3)<<endl;
    cout<<"7 0 3->"<<produsElemente(v4,3)<<endl;
}



#endif // SUMA-MAXIM-VECTOR_H_INCLUDED
