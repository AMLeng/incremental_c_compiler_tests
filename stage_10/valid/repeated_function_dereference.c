int f(int a){
    return -a;
}
int main(){
    int (*p)(int) = f;
    (****p)(74);
}
