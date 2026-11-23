typedef float f32;

extern "C" void fn_02102d60(void*);
extern "C" void fn_0210340c(void*, float);
struct StatefulEntry;
extern "C" StatefulEntry* fn_0378af4c(void *);
extern "C" void fn_0378b19c(void*, void*);

extern "C" f32 data_10021724;

extern "C" void fn_02103f08(void **arg0) {
    void *temp_r31;

    fn_02102d60(arg0);
    fn_0210340c(arg0, data_10021724);
    temp_r31 = *arg0;
    if (fn_0378af4c(temp_r31) != 0) {
        fn_0378b19c(temp_r31, 0);
    }
}
