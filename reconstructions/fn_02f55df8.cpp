extern "C" int fn_02f51834(void);

extern "C" int data_10532b44;

namespace {
struct Table {
    unsigned count;
    int entries;
};
}

extern "C" int fn_02f55df8(void) {
    int index = fn_02f51834();
    if (index >= 6) {
        return 0;
    }
    int entry = ((Table*)&data_10532b44)->entries;
    if ((unsigned)index < ((Table*)&data_10532b44)->count) {
        entry += index * 0x5C;
    }
    return entry;
}
