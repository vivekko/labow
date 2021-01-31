int countBitsFlip(int a, int b){
    int flip = 0;
    for(int i=0;i<32;i++){
        if((a&1) != (b&1))  ++flip;
        a>>=1;b>>=1;
    }
    return flip;
}