extern "C" void fn_0308e6d0(void*);
extern "C" void fn_03a4a168(void*);
extern "C" void fn_03a75b14(void* object, unsigned flags);
extern "C" void fn_03a774c4(void* object, unsigned flags);
extern "C" void fn_03c49a34(void* object, unsigned flags);
extern "C" int data_1035e75c;

namespace {
struct Object {
    char padding_0[8];
    int *vtable;
    char padding_C[0x9C];
    void *buffer;
};
}

extern "C" void fn_03a4a1b4(void* self, int flags)
{
    if (self != 0) {
        void* buffer = ((Object *)self)->buffer;
        ((Object *)self)->vtable = &data_1035e75c;
        if (buffer != 0) {
            fn_0308e6d0(buffer);
            ((Object *)self)->buffer = 0;
        }
        fn_03a4a168(self);
        fn_03a774c4((char*)self + 0x19C, 2);
        fn_03a75b14((char*)self + 0x15C, 2);
        fn_03c49a34(self, 0);
        bool owned = flags & 1;
        if (owned) {
            fn_0308e6d0(self);
        }
    }
}
