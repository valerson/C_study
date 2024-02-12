int area(struct Rect a){
    int weight=abs(a.rb.x)+abs(a.lt.x);
    int height=abs(a.lt.y)+abs(a.rb.y);
    return weight*height;
}