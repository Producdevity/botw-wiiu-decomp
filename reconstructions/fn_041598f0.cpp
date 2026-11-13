namespace {
struct Object { unsigned char padding[16]; int value; };
}
extern "C" int fn_041598f0(void* context) {
    return static_cast<const Object*>(context)->value;
}
