int main(){
    int arr[3] = {5,7,9};
    int* a = arr+2;
    int* b = a--;
    if(b<arr){
        return *arr*(*b);
    }
    if(b>= arr){
        return *b+*a;
    }
}
