int func(int a[], int size){
    int prod = 1;
    for(int *i=a; (i-a)< size; i++){
        prod *= *i;
    }
    return prod;
}
int main(){
    int a[4] = {11,13,17,19};
    return func(a,4);
}
