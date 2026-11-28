extern "C" void fn_043484e0(void*);
extern "C" void fn_04348568(void*, int);
extern "C" void fn_04348578(void*);
extern "C" void fn_04348580(void*, int);
extern "C" void fn_043486c0(void*);

namespace {
struct Object {
    char padding_0[20];
    int left;
    int right;
    char padding_1c[12];
    int count;
    char padding_2c[4];
    char first[32];
    char second[156];
    char third[1];
};
}

extern "C" void fn_030a3404(void* object) {
    int left;
    int right;

    left = ((Object *)object)->left;
    right = ((Object *)object)->right;
    fn_043484e0(((Object *)object)->first);
    fn_043486c0((void *)left);
    fn_04348578((void *)right);
    fn_04348580(((Object *)object)->second, ((Object *)object)->count);
    fn_04348568(((Object *)object)->third, ((Object *)object)->count);
}
