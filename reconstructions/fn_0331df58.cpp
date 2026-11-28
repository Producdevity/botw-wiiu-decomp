extern "C" int fn_03317670(void*, void*);

extern "C" void* data_1046d780;

namespace {
struct Object {
    char padding_0[0xC];
    void *target;
};
}

extern "C" unsigned char fn_0331df58(void* object)
{
    int result = 0;
    if (data_1046d780 != 0 && fn_03317670(data_1046d780, ((Object *) object)->target) != 0) {
        result = 1;
    }
    return result;
}
