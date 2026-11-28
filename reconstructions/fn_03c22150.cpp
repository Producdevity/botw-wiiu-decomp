namespace {
struct Object {
    char padding_0[8];
    void *owner;
    char padding_c[0xC];
    char member_18[1];
};
}

extern "C" void fn_03c21ec4(void*, void*, void*, int);
extern "C" void fn_04348cf0(void*, void*, void*, void*);

extern "C" void fn_03c22150(void *object, int source, int mode) {
    fn_03c21ec4(object, ((Object *)object)->member_18, (void *)(source + 8), (mode ^ 2) == 0);
    fn_04348cf0(((Object *)object)->owner, 0, 0, ((Object *)object)->member_18);
}
