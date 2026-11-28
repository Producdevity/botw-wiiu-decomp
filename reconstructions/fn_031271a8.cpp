extern "C" void *fn_03126a74(void *map, const void *key);
extern "C" void fn_0378da14(void *handle);

namespace {
struct Entry {
    char padding_0[0x10];
    char handle_10[1];
};
}

extern "C" bool fn_031271a8(void *map, const void *key)
{
    Entry *entry = (Entry *)fn_03126a74(map, key);
    if (entry) {
        fn_0378da14(entry->handle_10);
        return true;
    }
    return false;
}
