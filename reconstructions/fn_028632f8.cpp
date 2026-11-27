extern "C" void fn_0247e790(int, int, int, int);
extern "C" int fn_033aa78c(void* owner, int value);

namespace {
struct Request {
    int owner;
    char padding_4[28];
    int *idPtr;
    unsigned char *flagPtr;
    unsigned char enabled;
};
}

extern "C" void fn_028632f8(void* request) {
    int owner;
    int handle;

    owner = ((Request *)request)->owner;
    handle = fn_033aa78c((void*)(owner), 0);
    if ((handle != 0) && ((int) ((Request *)request)->enabled != 0)) {
        fn_0247e790(owner, *((Request *)request)->idPtr, handle, *((Request *)request)->flagPtr);
    }
}
