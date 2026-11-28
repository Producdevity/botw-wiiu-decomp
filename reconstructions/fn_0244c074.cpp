extern "C" void fn_023fe894(void*);

namespace {
struct FlaggedObject {
    unsigned char unknown[0x26C];
    unsigned char otherFlags : 6;
    unsigned char clearedFlag : 1;
    unsigned char lowFlag : 1;
};
}

extern "C" void fn_0244c074(char** self) {
    fn_023fe894(self);
    FlaggedObject* target = *(FlaggedObject**)(*self + 0x38C);
    if (target != 0) {
        target->clearedFlag = 0;
    }
}
