
struct s{
    int a;
    double b;
} * n;
double f(struct s n){
    return n.a*n.b;
}
int main(){
    struct s x;
    x.a = 4;
    x.b=0.5;
    return f(x);
}
