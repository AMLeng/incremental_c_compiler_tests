int main(){
    int a = 1;
    for(int i=0; i<2; i++){
        switch(i){
        case 0:
            a*= 5;
        case 1:
            a *= 3;
        }
    }
    return a;
}
