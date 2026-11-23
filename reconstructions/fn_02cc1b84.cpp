extern "C" void fn_02d6b514(void *);
struct InferredObject;
extern "C" unsigned int fn_02d82148(const void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_02cc1b84(struct InferredObject **arg0) {
    if (fn_02d82148(*arg0) != 0) {
        fn_030ea2cc(arg0);
    }
    fn_02d6b514(*arg0);
}
