extern "C" void* fn_0308e578(unsigned);

extern "C" void fn_03fec044(int *word, int high, int low) {
    if ((word != 0) || (word = static_cast<int *>(fn_0308e578(4U)), word != 0)) {
        *word = (*word & ~0xC0000000) | (((low & 1) | (high << 1)) << 30);
    }
}
