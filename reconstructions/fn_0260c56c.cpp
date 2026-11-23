extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485f68(void*);
struct InferredObject;
extern "C" unsigned int fn_03486c10(const void*);

extern "C" void fn_0260c56c(void *arg0) {
    if ((fn_03485c18((*(struct InferredObject **)((char *)(arg0) + (0x88)))) != 0) || (fn_03486c10((*(struct InferredObject **)((char *)(arg0) + (0x88)))) != 0)) {
        fn_03485f68((*(struct InferredObject **)((char *)(arg0) + (0x88))));
    }
}
