int sky_hundred(int n){
    int mod = n & 3;
    return ~(n >> 31) & ((n & (~(!(mod ^ 0)) + 1)) | (1 & ! (mod ^ 1)) | ((n + 1) & (~(!(mod ^ 2)) + 1)));
}