extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485e4c(void*);
struct InferredObject;
extern "C" unsigned int fn_03486c1c(const void*);

extern "C" void fn_02c1a3bc(struct InferredObject *arg0) {
    if ((arg0 != 0) && ((fn_03485c18(arg0) == 0) || (fn_03486c1c(arg0) != 0))) {
        fn_03485e4c(arg0);
    }
}
