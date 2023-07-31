struct s{
    int a;
    double x;
    float n;
} x;
int main(){
    return _Alignof(x) + sizeof(x);
}
