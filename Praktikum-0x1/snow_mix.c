int snow_mix(int N) {
    int x = (1 << 23); 
    int sum = N ^ x;
    int carry = (N & x) << 1; 
    return sum ^ carry;
}