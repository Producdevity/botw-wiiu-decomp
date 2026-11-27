extern "C" void* fn_0355ef40(void *);
extern "C" void fn_0356fc30(void *, int);
extern "C" char* data_1047c390;

namespace {
struct Root {
    unsigned char padding_0[0x1C];
    void *child;
};
}

extern "C" void fn_023ed42c(void) {
    void *child;
    void *resource;

    child = ((Root *)data_1047c390)->child;
    if (child != 0) {
        resource = fn_0355ef40(child);
        if (resource != 0) {
            fn_0356fc30(resource, 0);
        }
    }
}
