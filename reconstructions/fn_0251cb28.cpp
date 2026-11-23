typedef int s32;

extern "C" void fn_02950880(int);
extern "C" void fn_0378b19c(void*, void*);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void fn_0251cb28(void **arg0) {
    fn_0378c734((ProcLink *)((char *)arg0 + 0x38));
    fn_0378b19c(*arg0, 0);
    fn_02950880((s32) *arg0);
}
