struct Crc32Context {
    unsigned int hash;
};

extern "C" unsigned int fn_030c5cc0(Crc32Context* context, const char* text);

extern "C" unsigned int fn_030c5d30(const char* text) {
    Crc32Context context;
    context.hash = 0xffffffff;
    return fn_030c5cc0(&context, text);
}
