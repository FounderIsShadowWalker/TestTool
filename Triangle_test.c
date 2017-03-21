#include <stdio.h>
void triangle(int a, int b, int c){
    if(a+b<c||a+c<b||b+c<a)
        printf("not triangle");
    else if(a==c && a==b)
        printf("equilateral triangle");
    else if((a==b&&(a!=c))||(a==c&&(b!=c))||(b==c&&(a!=c)))
        printf("isosceles triangle");
    else if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a){
        printf("right-angled triangle");
    }
    else{
        printf("normal triangle");
    }
}
int main(int argc, const char * argv[]) {
    triangle(-1,2,12);
    return 0;
}
