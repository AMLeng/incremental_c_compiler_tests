int main(){
    int a = 4;
    for(int i=0; i<a; i++){
        if(i*a % 2 == 0){
            goto bob;
        }else{
            continue;
        }
        bob:
        return -3;
    }
    bob:
    return a;
}
