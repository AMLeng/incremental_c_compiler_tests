int main(){
    double arr[4] = {3,5,7,9};
    double *a = arr+3;
    return *a*(arr-a);
}
