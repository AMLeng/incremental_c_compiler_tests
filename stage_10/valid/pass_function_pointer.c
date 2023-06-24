int eval(int(*f)(int,int), int a, int b){
    return (*f)(a,b);
}
int plus(int a, int b){
    return a + b;
}
int times(int a, int b){
    return a * b;
}
int main(){
    int(*p)(int, int) = &plus;
    int(*q)(int, int) = times;
    return eval(q,eval(p,3,7),2);
}
