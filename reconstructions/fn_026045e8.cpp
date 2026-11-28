extern "C" int fn_0294fcec(int, int);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" int data_100f4d14;
extern "C" int data_100f4d1c;

namespace {
struct Owner {
    int id;
    unsigned char padding_4[0x1C];
    int* otherId;
};
inline int matchesId(int a, int b) {
    return fn_0294fcec(a, b);
}
}

extern "C" void fn_026045e8(void *object, void *output)
{
    int* table = &data_100f4d1c;
    if (matchesId(((Owner*) object)->id, *((Owner*) object)->otherId) != 0) {
        table = &data_100f4d14;
    }
    fn_037b8284(object, table, output);
}
