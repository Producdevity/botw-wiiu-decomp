typedef int s32;

struct InferredObject;
extern "C" bool fn_03c124c0(const void*);
extern "C" void fn_03c15abc(void*);

extern "C" void fn_030c7888(void *arg0) {
    if (fn_03c124c0((const InferredObject *)((char *)arg0 + 8)) != 0) {
        fn_03c15abc((char *)arg0 + 8);
    }
    (*(s32 *)((char *)(arg0) + (0x654))) = 0;
}
