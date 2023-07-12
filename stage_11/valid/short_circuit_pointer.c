int f(int *a, int*b){
    return a || b;
    if(a || b){
        return (a && *a) + (b && *b);
    }else{
        return -1;
    }
}
int main(){
    int x = 0;
    int y = 21;
    int *a = &x;
    int *b = &y;
    int *c = 0;
    return f(a,b)+3*f(a,a)+9*f(b,b)+27*f(c,a)+81*f(c,c);
}
