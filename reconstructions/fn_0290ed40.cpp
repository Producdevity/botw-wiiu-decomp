typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0290c184(void*);
extern "C" void fn_0290e9d0(void*);
struct StateRecordRef;
extern "C" bool fn_0378c788(const StateRecordRef *);
extern "C" int fn_0378c7b0(void *);
extern "C" void fn_0378c840(void *);

namespace {
struct Object {
    char padding_0[0x50];
    s32 record;
    u8 valid;
};
}

extern "C" void fn_0290ed40(void *object) {
    fn_0290c184(object);
    if (((Object *)object)->record != 0 || ((Object *)object)->valid != 0) {
        if (fn_0378c788((const StateRecordRef *)&((Object *)object)->record) != 0) {
            fn_0290e9d0(object);
            return;
        }
        if (fn_0378c7b0(&((Object *)object)->record) != 0) {
            fn_0378c840(&((Object *)object)->record);
        }
    }
}
