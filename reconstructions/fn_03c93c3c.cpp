extern "C" int fn_03c95914(void*);

namespace {
struct Object {
    int status;
    char padding_4[4];
    char member[1];
};
}

extern "C" int fn_03c93c3c(int *slot) {
    int result = fn_03c95914(((Object *)slot)->member);

    if (result == 0) {
        result = 0;
        *slot = -1;
    }
    return result;
}
