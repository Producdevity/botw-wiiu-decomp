extern "C" int fn_03c30818(void*, int);
extern "C" void fn_03c40470(void*, unsigned char);

namespace {
struct Owner {
    char padding_0[0x26];
    signed char state;
};
}

extern "C" void fn_03c404e8(void* object, unsigned char value) {
    int index = 0;
    ((Owner*)object)->state = value;
    int remaining = 16;
    do {
        int child = fn_03c30818(object, index);
        if (child != 0) {
            fn_03c40470((void*)child, value);
        }
        remaining -= 1;
        index += 1;
    } while (remaining != 0);
}
