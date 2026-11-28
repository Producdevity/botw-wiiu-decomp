typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0251c898(void*);
extern "C" void fn_0251cb6c(void*);
struct StatefulEntry;
extern "C" StatefulEntry* fn_0378af4c(void *);
struct StateRecordRef;
extern "C" bool fn_0378c788(const StateRecordRef *);
extern "C" int fn_0378c7b0(void *);
extern "C" void fn_0378c840(void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x34];
    char record[0x14];
    u8 active;
};
}

extern "C" s32 fn_0251cc2c(void *object) {
    if (((Object *)object)->active != 0) {
        if (fn_0378c788((const StateRecordRef *)((Object *)object)->record) != 0) {
            fn_0251cb6c(object);
            return 1;
        }
        if (fn_0378af4c(((Object *)object)->owner) == 0 && fn_0378c7b0(((Object *)object)->record) != 0) {
            fn_0378c840(((Object *)object)->record);
            fn_0251c898(object);
        }
    }
    return 0;
}
