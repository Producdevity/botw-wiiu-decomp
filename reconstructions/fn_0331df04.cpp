extern "C" int fn_03314cd4(void*, void*);

extern "C" void* data_1046d780;

namespace {
struct Object {
    char padding_0[0xC];
    void *target;
};
}

extern "C" unsigned char fn_0331df04(void* object)
{
    int result = 0;
    if (data_1046d780 != 0 && fn_03314cd4(data_1046d780, ((Object *) object)->target) != 0) {
        result = 1;
    }
    return result;
}
