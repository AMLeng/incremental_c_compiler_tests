int main(){
    int b = 1;
    for(int i=0; i<3; i++){
        switch(i){
            case 1:
                b*=i;
                break;
            case 2:
                b*= 7;
        }
    }
    return b;
}
