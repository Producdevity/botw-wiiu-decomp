namespace {
struct Owner {
    unsigned char padding_0[0x144];
    void *buffer;
};
}

extern "C" void fn_03ac4e2c(void*, void*);
extern "C" void *data_1047eb9c;

extern "C" void fn_03b15664(void *object) {
    void *buffer = ((Owner *)object)->buffer;
    if (buffer != 0) {
        fn_03ac4e2c(data_1047eb9c, buffer);
        ((Owner *)object)->buffer = 0;
    }
}
