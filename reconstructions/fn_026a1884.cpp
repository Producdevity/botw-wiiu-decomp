typedef int s32;

extern "C" char* fn_0204151c(void *);
extern "C" int fn_02674b2c(void*);
extern "C" void* fn_02674e00(void *, int);
extern "C" void* fn_02674e3c(void *, void *);
extern "C" void fn_03487a04(void*, void*);
extern "C" void fn_03487ae4(void*, void*);
extern "C" void fn_0348da08(void*, int, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_1010c9d4;

namespace {
struct Info {
    char padding_0[0x3C];
    s32 kind;
};

struct Entity {
    char padding_0[0xF4];
    void *component;
};
}

extern "C" void fn_026a1884(void *object) {
    s32 entity = fn_02674b2c(object);
    if ((entity != 0) && (((Info *)fn_0204151c((void *)entity))->kind == 1)) {
        void *component = ((Entity *)entity)->component;
        if (component != 0) {
            fn_0348da08(component, 1, (void *)1);
            fn_03487a04(component, 0);
            fn_03487ae4(component, 0);
        }
    }
    fn_02674e00(object, 0xC);
    fn_02674e3c(object, 0);
    fn_037b8284(object, &data_1010c9d4, 0);
}
