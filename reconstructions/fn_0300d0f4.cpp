#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486708;
extern "C" RuntimeTag data_10486fec;
extern "C" const RuntimeVTable data_1024f0a8;
extern "C" unsigned data_10486700;
extern "C" RuntimeTag data_10486f80;
extern "C" const RuntimeVTable data_1024f098;
extern "C" unsigned data_104866fc;
extern "C" RuntimeTag data_10486f7c;
extern "C" const RuntimeVTable data_1024f088;
extern "C" unsigned data_104866f8;
extern "C" RuntimeTag data_10486f78;
extern "C" const RuntimeVTable data_1024efd8;

typedef Pointer<&data_10486708, &data_10486fec, &data_1024f0a8> Type0;
typedef Pointer<&data_10486700, &data_10486f80, &data_1024f098> Type1;
typedef Pointer<&data_104866fc, &data_10486f7c, &data_1024f088> Type2;
typedef Pointer<&data_104866f8, &data_10486f78, &data_1024efd8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0300d0f4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
