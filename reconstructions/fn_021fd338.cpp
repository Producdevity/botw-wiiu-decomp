// Observed behavior: set bit 2 in byte at offset 11. Original types and names are unknown.
extern "C" void fn_021fd338(unsigned char* object) {
    object[11] |= 4;
}
