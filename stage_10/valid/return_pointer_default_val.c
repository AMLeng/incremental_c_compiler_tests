int* f(int *a){
    *a += 1;
}
int main(){
    int a = 3;
    f(&a);
    f(&a);
    return a;
}
