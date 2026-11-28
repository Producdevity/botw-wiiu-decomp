typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0340afac(void *, int, int);
extern "C" void fn_0364b890(void*);

extern "C" void *data_1046f428;
extern "C" void *data_1047be88;

namespace {
struct Slot {
    char padding_0[0x18];
    void *resource;
};

struct Manager {
    char padding_0[0x45C];
    u32 count;
    char padding_460[4];
    Slot *slots;
};

struct Object {
    char padding_0[0x128];
    s32 width;
    s32 height;
};
}

extern "C" void fn_02c44af0(void *object) {
    void *resource;

    fn_0340afac(data_1046f428, ((Object *)object)->width, ((Object *)object)->height);
    resource = 0;
    if (((Manager *)data_1047be88)->count > 6U) {
        resource = ((Manager *)data_1047be88)->slots->resource;
    }
    fn_0364b890(resource);
}
