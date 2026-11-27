extern "C" void fn_043484e0(void*);
extern "C" void fn_04348578(void*);
extern "C" void fn_043486c0(void*);

namespace {
struct Object {
    void *first;
    void *second;
    char member[1];
};
}

extern "C" void fn_03b64f24(void *object) {
    void *first = ((Object *)object)->first;
    void *second = ((Object *)object)->second;

    fn_043484e0(((Object *)object)->member);
    fn_043486c0(first);
    fn_04348578(second);
}
