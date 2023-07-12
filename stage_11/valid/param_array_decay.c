int f(double a[4]){
    return 4;
}
int g(int b(double * a)){
    double *x = 0;
    return b(x);
}
int main(){
    return g(f);
}
