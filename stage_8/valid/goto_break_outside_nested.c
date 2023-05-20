int main(){
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(i+j < i*j){
                goto end;
            }
        }
        if(i > 20){
            return i;
        }
    }
    end:
    return -12;
}
