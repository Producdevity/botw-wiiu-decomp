extern "C" void fn_0370d910(void*, void*, void*, int);
extern "C" void fn_0370e02c(void*);

namespace {
struct Owner {
    unsigned char padding_0[916];
    void *queue;
};
}

extern "C" void fn_0221c254(void **handle) {
    int index = 1;
    int remaining = 2;
    do {
        fn_0370d910(((Owner *)*handle)->queue, (void *)index, 0, 1);
        remaining -= 1;
        index += 1;
    } while (remaining != 0);
    fn_0370e02c(((Owner *)*handle)->queue);
}
