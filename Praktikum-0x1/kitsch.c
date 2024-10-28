int kitsch(int x) {
    int divBy64 = x >> 6;
    int remainder= x & 63;
    int multBy17 = (divBy64 << 4) + divBy64;
    int remainderMult = (remainder << 4) + remainder;
    return multBy17 + ((remainderMult + ((x >> 31) & 63)) >> 6);
}