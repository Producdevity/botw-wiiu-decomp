typedef unsigned char u8;
typedef int s32;

struct StateRecordRef;
extern "C" bool fn_0378c788(const StateRecordRef *);
extern "C" int fn_0378c7b0(void*);

extern "C" u8 fn_0384bbe4(s32 base) {
    s32 result;

    result = 1;
    if ((fn_0378c788((const StateRecordRef *)(base + 4)) == 0) && (fn_0378c7b0((void *)(base + 4)) == 0)) {
        result = 0;
    }
    return result;
}
