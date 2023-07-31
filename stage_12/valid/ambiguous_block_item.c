int x = 3;
int A(int x){
    return -x;
}
int main(){
    A(x);
    typedef int A;
    A(x);
    {
        int A(int x);
        x = 5;
        return A(x);
    }
}
