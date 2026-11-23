typedef unsigned char u8;
typedef int s32;

struct StateRecordRef;
extern "C" bool fn_0378c788(const StateRecordRef *);
extern "C" int fn_0378c7b0(void*);

extern "C" u8 fn_0384bbe4(s32 arg0) {
    s32 var_r31;

    var_r31 = 1;
    if ((fn_0378c788((const StateRecordRef *)(arg0 + 4)) == 0) && (fn_0378c7b0((void *)(arg0 + 4)) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
