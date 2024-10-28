unsigned how_to_sekai_seifuku(unsigned f) {
    unsigned sign = (f >> 15) & 0x1;
    unsigned exponent = (f >> 10) & 0x1F;
    unsigned mantissa = f & 0x3FF;
    unsigned result = 0;

    if (exponent == 0x1F) {
        if (mantissa == 0) {
            if (sign == 0x1) {
                result = 0xFF800000;
            } else {
                result = 0x7F800000;
            }
        } else {
            result = 0x7F800001;
        }
    } else if (exponent == 0) {
        if (mantissa == 0) {
            result = (sign << 31);
        } else {
            exponent = 0x71;
            while ((mantissa & 0x400) == 0) {
                mantissa = mantissa << 1;
                exponent = exponent - 1;
            }
            mantissa = mantissa & 0x3FF;
            result = (sign << 31) | (exponent << 23) | (mantissa << 13);
        }
    } else {
        exponent = exponent + 0x70;
        result = (sign << 31) | (exponent << 23) | (mantissa << 13);
    }
    return result;
}