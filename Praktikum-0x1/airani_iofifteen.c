int airani_iofifteen(int iofi) {
    return !(iofi >> 4) & (iofi & 1) & ((iofi >> 1) & 1) & ((iofi >> 2) & 1) & ((iofi >> 3) & 1);
}