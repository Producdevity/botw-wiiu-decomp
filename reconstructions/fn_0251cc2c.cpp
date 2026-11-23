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

extern "C" s32 fn_0251cc2c(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x4C))) != 0) {
        if (fn_0378c788((const StateRecordRef *)((char *)arg0 + 0x38)) != 0) {
            fn_0251cb6c(arg0);
            return 1;
        }
        if ((fn_0378af4c((*(void **)((char *)(arg0) + (0)))) == 0) && (fn_0378c7b0((char *)arg0 + 0x38) != 0)) {
            fn_0378c840((char *)arg0 + 0x38);
            fn_0251c898(arg0);
        }
        
        return 0;
    }
    return 0;
}
