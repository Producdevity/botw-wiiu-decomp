typedef int s32;

extern "C" int fn_03290df8(void*);
extern "C" void fn_03713120(void*, int, int, int, void*);
extern "C" void * data_10467bfc;

namespace {
struct Manager {
    char padding_0[0x50];
    void *resource;
};

struct Owner {
    char padding_0[0x394];
    void *target;
    char padding_398[0x848 - 0x398];
    s32 used;
    s32 limit;
};
}

extern "C" void fn_02b075c0(void *owner) {
    void *resource;

    if (data_10467bfc != 0) {
        resource = ((Manager *)data_10467bfc)->resource;
        if ((resource != 0) && (((Owner *)owner)->used + fn_03290df8(resource) < ((Owner *)owner)->limit)) {
            fn_03713120(((Owner *)owner)->target, 0x42, 2, 1, 0);
            return;
        }
    }
    fn_03713120(((Owner *)owner)->target, 0x42, 2, 0, 0);
}
