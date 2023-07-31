int typedef A[];
int main(){
    A a = {1,2};
    A b = {3,4,5};
    return sizeof(b)-sizeof(a);
}
