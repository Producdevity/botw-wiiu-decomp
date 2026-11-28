namespace {
struct Object {
    char padding_0[0xB];
    unsigned char flags;
    char padding_c[0x58];
    char member_64[1];
};
}

extern "C" void fn_02309a88(void*);
extern "C" void fn_02b140d4(void*, void*);

extern "C" void fn_021125c4(void *object) {
    Object *view = (Object *)object;
    fn_02309a88(object);
    view->flags |= 4;
    fn_02b140d4(view->member_64, 0);
}
