int main(){
    int i = 0;
    int count = 27;
    int n = (count+3)/4;
    switch(count % 4){
        case 0: do{i++;
        case 3: i++;
        case 2: i++;
        case 1: i++;
        }while(--n > 0);
    }
    return i;
}
