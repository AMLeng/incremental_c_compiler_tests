int main(){
    int a = 4;
    double b = 3.0;
    void* c = &b;
    int* d = &a;
    return c != d;
}
