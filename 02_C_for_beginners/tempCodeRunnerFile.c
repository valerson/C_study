int cmp_int(const void * p1, const void * p2)
{
    const int *pp1 = (const int *)p1;
    const int *pp2 = (const int *)p2;
    
    return (*pp1>*pp2) - (*pp1-*pp2);
}