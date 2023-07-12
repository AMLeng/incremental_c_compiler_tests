int main(){
    int arr[3] = {5,7,9};
    int* a = arr;
    int* b = ++a;
    if(b>a){
        return *a*(*b);
    }
    if(b<= a){
        return *b+*a;
    }
}
