typedef int s32;

namespace {
struct Globals {
    char padding_0[0x1C];
    void *module;
};

struct Module {
    char padding_0[4];
    void *handle;
};

struct Object {
    char padding_0[0x1F4];
    s32 value;
};
}

extern "C" int fn_0355f8d8(void*);
extern "C" char* data_1047c390;

extern "C" void fn_02735ff4(void *object) {
    Module *module = (Module *)((Globals *)data_1047c390)->module;
    if (module != 0) {
        void *handle = module->handle;
        if (handle != 0) {
            ((Object *)object)->value = fn_0355f8d8(handle);
        }
    }
}
