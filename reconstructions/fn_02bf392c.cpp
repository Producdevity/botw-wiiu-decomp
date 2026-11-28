extern "C" void* fn_02c0378c(void* holder);
extern "C" int fn_02c10888(void*);
extern "C" bool fn_02c10cd8(void *, unsigned);

extern "C" float data_101bcab4;

namespace {
struct Rider {
    char padding_0[0x748];
    float value;
    char padding_74c[0x27];
    char flag;
};
struct Target {
    char padding_0[0x550];
    Rider rider;
};
struct Owner {
    char padding_0[0x10];
    char holder;
    char padding_11[0x47];
    float value;
    char padding_5c[0x18E];
    unsigned char mode;
};
}

extern "C" void fn_02bf392c(void *object, void *context) {
    ((Owner*)object)->value = data_101bcab4;
    Target *target;
    Rider *rider;
    target = (Target*)fn_02c0378c(&((Owner*)object)->holder);
    if (target != 0) {
        rider = &target->rider;
        if ((((Owner*)object)->mode == 1) && (fn_02c10cd8(&rider->flag, 1U) != 0) && (fn_02c10888(rider) != 0)) {
            ((Owner*)object)->value = rider->value;
        }
    }
}
