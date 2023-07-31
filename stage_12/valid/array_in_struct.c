struct q{
    int a;
    double x;
    double y;
    int b;
    int c[3];
} ;
struct q p = {1,2,3,4,{5,6,7}};

int main(){
    p.c[1] = -1;
    return p.c[2]*p.y*p.c[1];
}

