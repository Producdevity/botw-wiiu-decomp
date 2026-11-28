typedef int s32;

extern "C" void* fn_03a26830(void*, int);
extern "C" void fn_03a27554(void*);

namespace {
struct Part {
    unsigned char padding_0[0x14];
    void* const* vtable;
};
}

extern "C" void fn_03a48140(void *object) {
    fn_03a27554(object);
    ((s32 (*)())static_cast<Part *>(fn_03a26830(object, 4))->vtable[51])();
}
