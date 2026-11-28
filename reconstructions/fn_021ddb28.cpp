extern "C" void fn_02232060(void*);
extern "C" void fn_0339e0c0(void *, void *);
extern "C" void fn_0339e1a4(void*, void*);
extern "C" const unsigned char data_10549dd0[];

namespace {
struct Owner {
    void* target;
    char padding_4[0x44];
    int state;
};
}

extern "C" void fn_021ddb28(void *object) {
    int state = ((Owner*)object)->state;
    if (state == 2) {
        fn_02232060(object);
        return;
    }
    if (state == 1) {
        fn_0339e0c0(((Owner*)object)->target, (void *)(data_10549dd0));
        fn_0339e1a4(((Owner*)object)->target, (void *)(data_10549dd0));
        ((Owner*)object)->state += 1;
        return;
    }
    ((Owner*)object)->state = 1;
}
