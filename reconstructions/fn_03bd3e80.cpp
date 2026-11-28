namespace {
struct Owner {
    unsigned char padding_0[0x2C];
    void *buffer;
};
}

extern "C" void fn_03bd2084(void*, void*);
extern "C" void *data_1047f0bc;

extern "C" void fn_03bd3e80(void *owner) {
    void *buffer = static_cast<Owner *>(owner)->buffer;
    if (buffer != 0) {
        fn_03bd2084(data_1047f0bc, buffer);
        static_cast<Owner *>(owner)->buffer = 0;
    }
}
