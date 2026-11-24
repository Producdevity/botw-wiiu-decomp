extern "C" void fn_03c1e780(unsigned int* bits, unsigned int index) {
    unsigned int word = index >> 5;
    unsigned int mask = 1u << (index & 31);
    bits[word] |= mask;
}
