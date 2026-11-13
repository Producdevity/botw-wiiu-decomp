struct __attribute__((aligned(16))) Block { __vec2x32float__ pairs[2]; };
extern "C" void fn_04106af0(Block* first, Block* second) {
    Block saved = *first;
    *first = *second;
    *second = saved;
}
