struct s{
    int a;
    double x;
    double y;
    int b;
} p;
int main(){
    p.a = 11;
    p.x = 5;
    p.b = 3;
    return &p.b - &p.a;
}
