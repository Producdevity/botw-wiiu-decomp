extern "C" void fn_02d6b514(void*);
struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);
extern "C" void fn_030ea2cc(void*);

extern "C" void fn_02cc1b84(struct InferredObject** handle) {
    if (fn_02d82148(*handle) != 0) {
        fn_030ea2cc(handle);
    }
    fn_02d6b514(*handle);
}
