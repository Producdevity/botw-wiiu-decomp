typedef signed char s8;
typedef int s32;

namespace {
struct Buffer {
    char padding_0[8];
    s32 size;
    char padding_C[4];
    char lock[1];
};
}

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_03bd6cfc(void *object, s8 *flag) {
    Buffer *buffer = (Buffer *)object;
    if (buffer->size != 0 && flag != 0) {
        void *lock = buffer->lock;
        fn_030bb668(lock);
        *flag = 0;
        fn_030bb69c(lock);
    }
}
