struct s{
    int a;
    double x;
} p;
struct s f(int n){
    struct s m;
    m.a = n;
    m.x = n;
    return m;
}
int main(){
    return f(4).a * f(3).x;
}
