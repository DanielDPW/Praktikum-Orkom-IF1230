int chicken_or_beef(int chicken, int beef) {
    return ((chicken >> 4) & 15) | ((beef << 1) & 15);
}