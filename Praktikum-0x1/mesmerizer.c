int mesmerizer(unsigned uf) {
    unsigned sign = (uf >> 31) & 0x1;
    unsigned exponent = (uf >> 23) & 0xFF;
    unsigned mantissa = uf & 0x7FFFFF;
    int result = 0;

    if (exponent == 0xFF) {
        result = 0x80000000u;
    } else {
        if (exponent >= 127) {
            exponent = exponent - 127;
            if (exponent <= 31) {
                result = (mantissa | 0x800000) >> (23 - exponent);
                if (sign) {
                    result = -result;
                }
            } else {
                result = 0x80000000u;
            }
        } else {
            result = 0;
        }
    }
    return result;
}