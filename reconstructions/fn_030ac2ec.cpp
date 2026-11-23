extern "C" int fn_030ac2ec(unsigned int bits) {
    bits = bits - ((bits >> 1) & 0x55555555);
    bits = (bits & 0x33333333) + ((bits >> 2) & 0x33333333);
    bits = (bits + (bits >> 4)) & 0x0F0F0F0F;
    bits = bits + (bits >> 8);
    bits = bits + (bits >> 16);
    return bits & 0x3F;
}
