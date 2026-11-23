#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488244;
extern "C" RuntimeTag data_10488248;
extern "C" const RuntimeVTable data_1029aa0c;
extern "C" unsigned data_104879f8;
extern "C" RuntimeTag data_104879fc;
extern "C" const RuntimeVTable data_1029a9fc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029a9dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029a9cc;

typedef Pointer<&data_10488244, &data_10488248, &data_1029aa0c> Type0;
typedef Pointer<&data_104879f8, &data_104879fc, &data_1029a9fc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1029a9dc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1029a9cc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03268830(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
