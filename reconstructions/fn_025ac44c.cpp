typedef int s32;

extern "C" void fn_02950880(int);
struct StatefulEntry;
extern "C" StatefulEntry* fn_0378af4c(void *);
extern "C" void fn_0378b19c(void*, void*);

extern "C" void fn_025ac44c(void **object) {
    if (fn_0378af4c(*object) != 0) {
        fn_0378b19c(*object, 0);
    }
    fn_02950880((s32) *object);
}
