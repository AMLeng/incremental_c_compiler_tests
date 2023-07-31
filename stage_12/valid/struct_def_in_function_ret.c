struct s2 {int a; int b;} f(int m){
    struct s2 a;
    a.a = m;
    a.b = m;
    return a;
}
int main(){
    return f(3).a * f(5).b;
}
