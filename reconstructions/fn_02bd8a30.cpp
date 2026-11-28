extern "C" void* fn_02c0378c(void* holder);

namespace {
struct Source {
    char padding_0[0x9E8];
    float position[3];
};
struct Owner {
    char padding_0[0x10];
    char holder;
    char padding_11[0x2F];
    float first[3];
    float second[3];
    float third[3];
};
}

extern "C" int fn_02bd8a30(void *object, void *context) {
    void *source = fn_02c0378c(&((Owner*)object)->holder);
    if (source == 0) {
        return 0;
    }
    float *position = ((Source*)source)->position;
    ((Owner*)object)->first[0] = position[0];
    ((Owner*)object)->first[1] = position[1];
    ((Owner*)object)->first[2] = position[2];
    ((Owner*)object)->second[0] = position[0];
    ((Owner*)object)->second[1] = position[1];
    ((Owner*)object)->second[2] = position[2];
    ((Owner*)object)->third[0] = position[0];
    ((Owner*)object)->third[1] = position[1];
    ((Owner*)object)->third[2] = position[2];
    return 1;
}
