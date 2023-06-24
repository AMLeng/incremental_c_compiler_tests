int* f(int *a){
    *a += 7;
    return a;
}
int main(){
    int a = 3;
    f(f(&a));
    return a;
}
