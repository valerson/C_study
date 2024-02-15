int maximum(int a, int b, int c){
    if (a>=b && a>=c) return a;
    if (b>=a && b>=c) return b;
    if (c>=a && c>=b) return c;
    return a;
}

int minimum(int a, int b, int c){
    if (a<=b && a<=c) return a;
    if (b<=a && b<=c) return b;
    if (c<=a && c<=b) return c;
    return a;
}