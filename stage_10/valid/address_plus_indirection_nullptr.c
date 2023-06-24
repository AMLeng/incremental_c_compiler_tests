int main(){
    int* a = 0;
    int* b = &*a;
    int c = 3;
    b = &c;
    return *b;
}
