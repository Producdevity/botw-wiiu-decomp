namespace {
struct Block {
    char padding_0[0xC];
    int value_c;
    char member_10[0xA0];
    int value_b0;
};
}

extern "C" void fn_03ccc65c(void*, void*, int);

extern "C" void fn_03cde9f4(void *dest, void *source) {
    fn_03ccc65c(((Block *)dest)->member_10, ((Block *)source)->member_10, 0x8C);
    ((Block *)dest)->value_b0 = ((Block *)source)->value_b0;
    ((Block *)dest)->value_c = ((Block *)source)->value_c;
}
