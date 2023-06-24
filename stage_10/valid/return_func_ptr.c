int (*f(int g(int)))(int a){
    return g;
}
int neg(int a){
    return -a;
}
int main(){
    return f(neg)(3);
}

