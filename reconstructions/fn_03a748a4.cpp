extern "C" void fn_03a745e0(void*, void*);
extern "C" void fn_04347c50(int, int, int);

namespace {
struct Object {
    int start;
    int size;
    char padding_8[4];
    int value_c;
    unsigned char flags;
};
}

extern "C" int fn_03a748a4(void* self)
{
    fn_03a745e0(self, 0);
    int start = ((Object *) self)->start;
    int size = ((Object *) self)->size;
    fn_04347c50(start + size, ((Object *) self)->value_c, 0);
    ((Object *) self)->flags |= 8;
    return 1;
}
