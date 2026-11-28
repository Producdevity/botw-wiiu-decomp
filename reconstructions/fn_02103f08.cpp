typedef float f32;

extern "C" void fn_02102d60(void*);
extern "C" void fn_0210340c(void*, float);
struct StatefulEntry;
extern "C" StatefulEntry* fn_0378af4c(void *);
extern "C" void fn_0378b19c(void*, void*);

extern "C" f32 data_10021724;

extern "C" void fn_02103f08(void **owner) {
    void *entry;

    fn_02102d60(owner);
    fn_0210340c(owner, data_10021724);
    entry = *owner;
    if (fn_0378af4c(entry) != 0) {
        fn_0378b19c(entry, 0);
    }
}
