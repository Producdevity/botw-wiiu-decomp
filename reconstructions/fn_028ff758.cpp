extern "C" int fn_02b5c744(int, int);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_1015f108;
extern "C" int data_1015f110;

namespace {
struct Owner {
    int id;
    unsigned char padding_4[0x1C];
    int* otherId;
};
inline int matchesId(int a, int b) {
    return fn_02b5c744(a, b);
}
}

extern "C" void fn_028ff758(void *object, void *output)
{
    int* table = &data_1015f110;
    if (matchesId(((Owner*) object)->id, *((Owner*) object)->otherId) != 0) {
        table = &data_1015f108;
    }
    fn_037b8284(object, table, output);
}
