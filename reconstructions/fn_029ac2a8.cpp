extern "C" void fn_026a80e8(void*);

namespace {
struct Object {
    char padding_0[0x64];
    unsigned char flag;
    char padding_65[3];
    int count;
};
}

extern "C" void fn_029ac2a8(void* self)
{
    fn_026a80e8(self);
    int count = ((Object *)self)->count;
    if (count != 0) {
        count = count - 1;
        ((Object *)self)->count = count;
        if (count == 1) {
            ((Object *)self)->flag = 1;
        }
    }
}
