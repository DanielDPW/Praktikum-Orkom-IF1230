int ganganji(int x) {
    int max_int = ~(1 << 31);
    int xtimed = (x >> 3) + x;
    int overflow = xtimed >> 31;
    return (overflow & max_int) | (~overflow & xtimed);
}