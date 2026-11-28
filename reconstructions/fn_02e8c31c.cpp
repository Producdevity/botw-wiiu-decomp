extern "C" void fn_02e8c0fc(void *);
extern "C" void fn_02e8c178(void *);
extern "C" void fn_02e8c314(void *);

namespace {
struct Object {
    char padding_0[0x14];
    unsigned char flags;
    char value_15;
    char padding_16[2];
    int value_18;
};
}

extern "C" void fn_02e8c31c(void *self) {
    unsigned char flags = ((Object *)self)->flags & ~2;
    ((Object *)self)->value_15 = 0;
    ((Object *)self)->flags = flags;
    fn_02e8c314(self);
    fn_02e8c0fc(self);
    fn_02e8c178(self);
    ((Object *)self)->value_18 = 0;
}
