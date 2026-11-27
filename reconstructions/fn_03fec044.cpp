typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" void fn_03fec044(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *word = arg0;
    if ((word != 0) || (word = (s32 *)(fn_0308e578(4U)), word != 0)) {
        *word = (*word & ~0xC0000000) | (((arg2 & 1) | (arg1 << 1)) << 30);
    }
}
