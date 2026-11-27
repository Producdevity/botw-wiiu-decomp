extern "C" void* fn_0434c000(void *, int, unsigned);

namespace {
struct Buffer {
    char padding_0[0x1C];
    int busy;
    char padding_20[0x924 - 0x20];
    unsigned size;
    char padding_928[0xA70 - 0x928];
    void *data;
};
}

extern "C" int fn_032516ac(void *object) {
    void *data;

    if (((Buffer *)object)->busy != 0 || (data = ((Buffer *)object)->data, data == 0)) {
        return 0;
    }
    fn_0434c000(data, 0, ((Buffer *)object)->size);
    return 1;
}
