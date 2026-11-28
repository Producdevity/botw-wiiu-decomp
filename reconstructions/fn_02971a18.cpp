extern "C" int fn_0294d674(int, int);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_10171378;
extern "C" int data_10171380;

namespace {
struct Owner {
    int id;
    unsigned char padding_4[0x1C];
    int* otherId;
};
inline int matchesId(int a, int b) {
    return fn_0294d674(a, b);
}
}

extern "C" void fn_02971a18(void *object, void *output)
{
    int* table = &data_10171380;
    if (matchesId(((Owner*) object)->id, *((Owner*) object)->otherId) != 0) {
        table = &data_10171378;
    }
    fn_037b8284(object, table, output);
}
